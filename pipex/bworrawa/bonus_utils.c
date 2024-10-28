/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bworrawa <bworrawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:23:40 by bworrawa          #+#    #+#             */
/*   Updated: 2024/10/26 16:54:10 by bworrawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

int	do_execute_chain(char *cmd, int ctr, char **envp)
{
	char	*path;
	char	**cmds;
	int		err;

	ctr = 0;
	cmds = ft_split(cmd, ' ');
	path = get_path(cmds[0], envp, &ctr);
	if (execve(path, cmds, envp) == -1)
	{
		err = errno;
		if (ctr == 42)
			err = 127;
		free(path);
		ft_free_map(cmds);
		return (px_exit(sd("pipex: "), sd(strerror(err)), err));
	}
	return (errno);
}

void	fork_child_process(char *cmd, char **envp)
{
	pid_t	pid;
	int		fdp[2];
	int		status;

	if (pipe(fdp) == -1)
		px_exit(sd("Error during piping"), sd(" "), 1);
	pid = fork();
	if (pid == -1)
		px_exit(sd("Error during forking"), sd(" "), 1);
	if (pid == 0)
	{
		close(fdp[0]);
		dup2(fdp[1], STDOUT_FILENO);
		exit(do_execute_chain(cmd, 0, envp));
	}
	else
	{
		close(fdp[1]);
		dup2(fdp[0], STDIN_FILENO);
		waitpid(pid, &status, 0);
	}
}

// int fork_recursive(char **cmds, int cur_index, int last_index, char **envp)
// {
// 	pid_t	pid;
// 	int		fdp[2];
// 	int		status;
// 	char	*temp;
// 	if (pipe(fdp) == -1)
// 		px_exit( sd("Error during piping"), sd(" "), 1 );
// 	pid = fork();
// 	if (pid == -1)
// 		px_exit( sd("Error during forking"), sd(" "), 1);
// 	if (pid == 0)
// 	{
// 		ft_putstr_fd("--> child is running...", 2);
// 		ft_putstr_fd(cmds[cur_index], 2);
// 		ft_putstr_fd("\n", 2);
// 		close(fdp[0]);
// 		dup2(fdp[1], STDOUT_FILENO);
// 		exit(do_execute_chain( cmds[cur_index], 0 , envp));
// 	}
// 	else
// 	{
// 		if(cur_index < last_index)
// 			fork_recursive(cmds, cur_index + 1, last_index, envp);
// 		sleep(1);
// 		close(fdp[1]);
// 		dup2(fdp[0], STDIN_FILENO);
// 		waitpid(pid, &status, 0);	
// 		ft_putstr_fd("==> parent is waiting for ", 2);
// 		ft_putstr_fd(cmds[cur_index], 2);
// 		ft_putstr_fd("...", 2);
// 		temp = ft_itoa((WEXITSTATUS(status)));
// 		ft_putstr_fd(temp, 2);
// 		ft_putstr_fd(" as responses...\n", 2);
//         return (WEXITSTATUS(status)); 
// 	}    
//     return (0);
// }