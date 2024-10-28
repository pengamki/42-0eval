/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heredoc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bworrawa <bworrawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:47:13 by bworrawa          #+#    #+#             */
/*   Updated: 2024/10/26 14:14:01 by bworrawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	read_line(char **ret)
{
	char	*buffer;
	char	c;
	int		bytes_read;
	int		ctr;

	ctr = -1;
	buffer = (char *)malloc(sizeof(char) * 1024);
	if (!buffer)
		px_exit(sd("Cannot malloc"), sd(" "), 1);
	bytes_read = read(0, &c, 1);
	while (bytes_read > 0 && c != '\0' && c != '\n')
	{
		buffer[++ctr] = c;
		bytes_read = read(0, &c, 1);
	}
	buffer[++ctr] = '\n';
	buffer[++ctr] = '\0';
	*ret = ft_strdup(buffer);
	free(buffer);
	return (bytes_read);
}

void	_handle_heredoc_read(int pfd[2], char *lim)
{
	char	*buffer;
	int		bytes_read;
	size_t	len;

	close(pfd[0]);
	bytes_read = 1;
	len = ft_strlen(lim);
	while (bytes_read > 0)
	{
		bytes_read = read_line(&buffer);
		if (ft_strncmp(buffer, lim, len) == 0 && ft_strlen(buffer) - 1 == len)
		{
			free(buffer);
			exit(EXIT_SUCCESS);
		}
		ft_putstr_fd("pipex heredoc>", 1);
		write(pfd[1], buffer, ft_strlen(buffer));
		free(buffer);
	}
	free(buffer);
}

void	get_here_doc(char *limiter)
{
	int		pfd[2];
	pid_t	pid;

	if (pipe(pfd) == -1)
		px_exit(sd("pipex: Error while piping here_doc."), sd(" "), 1);
	write(1, "pipex heredoc>", 14);
	pid = fork();
	if (pid == -1)
		px_exit(sd("pipex: Error during forking here_doc prcess."), sd(" "), 1);
	if (pid == 0)
		_handle_heredoc_read(pfd, limiter);
	else
	{
		close(pfd[1]);
		dup2(pfd[0], STDIN_FILENO);
		wait(NULL);
	}
}
