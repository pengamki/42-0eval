/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bworrawa <bworrawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:48:00 by bworrawa          #+#    #+#             */
/*   Updated: 2024/10/26 19:33:40 by bworrawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/wait.h>
# include <fcntl.h>  
# include <errno.h>
# include <stdbool.h>
# include "libft.h"
# include "ft_printf.h"
# include <stdbool.h>

# define OPFILE_READ		1
# define OPFILE_READ_MODE	0644
# define OPFILE_WRITE		2
# define OPFILE_WRITE_MODE	0622
# define OPFILE_APPEND		3
# define OPFILE_APPEND_MODE 0622

// pipex_utils.c
int		px_exit(char *str1, char *str2, int exit_code);
char	**env_get_vars(char *name, char **env);
char	*get_path(char *cmd, char **env, int *i);
char	*free_map_and_returns(char **cmds, char *exec);

// pipex_utils2.c
int		cmd_not_found_handler(char *raw_cmd, char **env);
int		check_infile(int argc, char **argv);

// str_utils.c
char	*sd(char *str);
char	*sanitize_str(char *str);
char	*ft_join(char *str1, char *str2, char *str3, char *str4);

// file_utils.c
int		open_file(char *path, int mode, int *err);
int		file_exists(char *path_cmd, int mode, int free_as_well);
#endif 
