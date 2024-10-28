/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   pipex_utils.c									  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: bworrawa <bworrawa@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/10/21 16:49:33 by bworrawa		  #+#	#+#			 */
/*   Updated: 2024/10/22 16:37:14 by bworrawa		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "pipex.h"

int	px_exit(char *str1, char *str2, int exit_code)
{
	ft_putstr_fd(str1, STDERR_FILENO);
	ft_putstr_fd(str2, STDERR_FILENO);
	ft_putstr_fd("\n", STDERR_FILENO);
	free(str1);
	free(str2);
	exit (exit_code);
	return (exit_code);
}

char	*free_map_and_returns(char **cmds, char *exec)
{
	ft_free_map(cmds);
	return (exec);
}

char	**env_get_vars(char *name, char **env)
{
	int		i;
	int		len;
	int		found;

	found = 0;
	len = ft_strlen(name);
	i = 0;
	while (env[i])
	{
		if (ft_strncmp(env[i], name, len) == 0)
		{
			found = i;
			break ;
		}
		i++;
	}
	if (!found)
		return (NULL);
	return (ft_split(env[i] + len, ':'));
}

char	*get_path(char *cmd, char **env, int *i)
{
	char	*exec;
	char	**paths;
	char	*path_part;
	char	**cmds;

	*i = -1;
	if (cmd == NULL || *cmd == '\0')
	{
		*i = 13;
		return (ft_strdup("_"));
	}
	cmds = ft_split(cmd, ' ');
	paths = env_get_vars("PATH", env);
	while (paths[++(*i)])
	{
		path_part = ft_strjoin(paths[*i], "/");
		exec = ft_strjoin(path_part, cmds[0]);
		free(path_part);
		if (access(exec, F_OK | X_OK) == 0)
			return (ft_free_map(paths), free_map_and_returns(cmds, exec));
		free(exec);
	}
	*i = -42;
	return (ft_free_map(cmds), ft_free_map(paths), ft_strdup(cmd));
}
