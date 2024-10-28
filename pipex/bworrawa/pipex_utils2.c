/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bworrawa <bworrawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:14:07 by bworrawa          #+#    #+#             */
/*   Updated: 2024/10/26 19:30:14 by bworrawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	cmd_not_found_handler(char *raw_cmd, char **env)
{
	int		cmd_exist;
	char	*out;

	out = get_path(raw_cmd, env, &cmd_exist);
	free(out);
	if (cmd_exist == -42)
		exit (127);
	return (1);
}

int	check_infile(int argc, char **argv)
{
	char	*infile;
	char	*temp;
	int		err;
	int		fd;

	infile = sanitize_str(argv[1]);
	if (access(infile, F_OK) == 0 && access(infile, R_OK) == -1)
	{
		temp = ft_join(sd("pipex: "), sd(infile), sd(": "), \
			sd(strerror(errno)));
		free(infile);
		infile = sanitize_str(argv[argc - 1]);
		fd = open_file(infile, OPFILE_WRITE, &err);
		free(infile);
		if (fd > 0)
			close(fd);
		return (px_exit(temp, ft_strdup(" "), 0));
	}
	free(infile);
	return (1);
}
