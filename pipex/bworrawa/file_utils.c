/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bworrawa <bworrawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:10:00 by bworrawa          #+#    #+#             */
/*   Updated: 2024/10/28 12:17:48 by bworrawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	open_file(char *path, int mode, int *err)
{
	int	open_mode;
	int	omod;
	int	fd;

	if (mode == OPFILE_READ)
	{
		open_mode = O_RDONLY;
		omod = OPFILE_READ_MODE;
	}
	if (mode == OPFILE_WRITE)
	{
		open_mode = O_CREAT | O_WRONLY | O_TRUNC;
		omod = OPFILE_WRITE_MODE;
	}
	if (mode == OPFILE_APPEND)
	{
		open_mode = O_CREAT | O_WRONLY | O_APPEND;
		omod = OPFILE_APPEND_MODE;
	}
	fd = open(path, open_mode, omod);
	*err = errno;
	return (fd);
}

int	file_exists(char *path_cmd, int mode, int free_as_well)
{
	int	out;

	out = access(path_cmd, mode) != -1;
	if (free_as_well)
		free(path_cmd);
	return (out);
}
