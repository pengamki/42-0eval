/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bworrawa <bworrawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:48:24 by bworrawa          #+#    #+#             */
/*   Updated: 2024/10/28 15:46:09 by bworrawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

int	handle_open_file(char **argv)
{
	int		err;
	int		infile_fd;
	char	*temp;

	infile_fd = open_file(argv[1], OPFILE_READ, &err);
	if (infile_fd < 0)
	{
		temp = ft_join(sd("pipex: no such file or directory: "), \
			sd(argv[1]), sd(" "), sd("\n"));
		ft_putstr_fd(temp, 2);
		free(temp);
		infile_fd = open_file("/tmp/pipex1_", OPFILE_WRITE, &err);
		if (infile_fd < 0)
			return (px_exit(sd("infile not found"), sd(" "), 1));
		ft_putstr_fd("\0", infile_fd);
		close(infile_fd);
		infile_fd = open_file("/tmp/pipex1_", OPFILE_READ, &err);
		if (infile_fd < 0)
			return (px_exit(sd("infile not found"), sd(" "), 1));
		dup2(infile_fd, STDIN_FILENO);
		close(infile_fd);
		return (2);
	}
	return (1);
}

int	main(int argc, char **argv, char **envp)
{
	int		err;
	int		outfile;
	int		cur_cmd_argv;

	if (argc < 5)
		return (px_exit(sd("pipex: Expected at least 4 args."), sd(""), 22));
	if (ft_strcmp(argv[1], "here_doc") == 0)
	{
		outfile = open_file(argv[argc -1], OPFILE_WRITE, &err);
		get_here_doc(argv[2]);
		cur_cmd_argv = 2;
	}
	else
	{
		outfile = open_file(argv[argc -1], OPFILE_APPEND, &err);
		cur_cmd_argv = handle_open_file(argv);
	}
	while (cur_cmd_argv < argc - 3)
		fork_child_process(argv[++cur_cmd_argv], envp);
	dup2(outfile, STDOUT_FILENO);
	return (do_execute_chain(argv[argc - 2], cur_cmd_argv, envp));
}
