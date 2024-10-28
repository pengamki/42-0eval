/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:48:24 by bworrawa          #+#    #+#             */
/*   Updated: 2024/10/28 16:59:18 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	_do_execute(char *cmd, char **envp, int *err)
{
	char	**cmd_argv;
	char	*path_cmd;
	int		out;

	cmd_argv = ft_split(cmd, ' ');
	path_cmd = get_path(cmd_argv[0], envp, &out);
	if (ft_strcmp(path_cmd, "_") == 0)
	{
		free(path_cmd);
		ft_free_map(cmd_argv);
		return (px_exit(ft_strdup("pipex: "), ft_strdup(strerror(out)), out));
	}
	out = execve(path_cmd, cmd_argv, envp);
	*err = errno;
	if (out == -1)
	{
		free(path_cmd);
		ft_free_map(cmd_argv);
		return (px_exit(ft_strdup("pipex: "), ft_strdup(strerror(*err)), *err));
	}
	return (*err);
}

int	_do_child(char *cmd_argv, char *inf_arg, char **envp, int *err)
{
	int		out;
	int		fd_infile;
	char	*infile;
	char	*temp;

	infile = sanitize_str(inf_arg);
	fd_infile = open_file(infile, OPFILE_READ, &out);
	if (fd_infile < 0)
	{
		temp = ft_join(sd("pipex: "), infile, sd(": "), sd(strerror(out)));
		return (px_exit(temp, ft_strdup(" "), out));
	}
	free(infile);
	dup2(fd_infile, STDIN_FILENO);
	out = _do_execute(cmd_argv, envp, err);
	close(fd_infile);
	return (out);
}

int	_handle_outstream(char *of_arg, int *err)
{
	char	*outfile;
	int		fd_outfile;
	char	*msg;

	outfile = sanitize_str(of_arg);
	fd_outfile = open_file(outfile, OPFILE_WRITE, err);
	if (fd_outfile < 0)
	{
		wait(NULL);
		msg = ft_join(sd("pipex: "), outfile, sd(": "), sd(strerror(*err)));
		return (px_exit(msg, ft_strdup(""), 1));
	}
	free(outfile);
	dup2(fd_outfile, STDOUT_FILENO);
	return (fd_outfile);
}

int	_do_parent(char *raw_cmd, char *of_arg, char **envp, int cpid)
{
	int		fd_outfile;
	pid_t	pa_id;
	int		child_status;
	int		pc_status;
	int		err;

	fd_outfile = _handle_outstream(of_arg, &err);
	pa_id = fork();
	if (pa_id == -1)
		return (px_exit(sd("pipex: Error during fork process"), sd(" "), err));
	if (pa_id == 0)
		exit (_do_execute(raw_cmd, envp, &err));
	else
	{
		waitpid(cpid, &child_status, 0);
		waitpid(pa_id, &pc_status, 0);
		close(fd_outfile);
		cmd_not_found_handler(raw_cmd, envp);
		return (WEXITSTATUS(pc_status));
	}
	return (EXIT_SUCCESS);
}

int	main(int argc, char **argv, char **envp)
{
	pid_t	fdp[2];
	int		result;
	int		pid;
	int		err;

	if (argc != 5)
		return (px_exit(sd("pipex: Expected exact 4 arguments."), sd(""), 22));
	check_infile(argc, argv);
	result = pipe(fdp);
	if (result < 0)
		return (px_exit(sd("pipex: "), sd(strerror(errno)), errno));
	pid = fork();
	if (pid < 0)
		return (px_exit(sd("pipex: "), sd(strerror(errno)), errno));
	if (pid == 0)
	{
		close(fdp[0]);
		dup2(fdp[1], STDOUT_FILENO);
		exit (_do_child(argv[2], argv[1], envp, &err));
	}
	close(fdp[1]);
	dup2(fdp[0], STDIN_FILENO);
	return (_do_parent(argv[3], argv[4], envp, pid));
}
