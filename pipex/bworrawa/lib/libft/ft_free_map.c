/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bworrawa <bworrawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:07:27 by bworrawa          #+#    #+#             */
/*   Updated: 2024/10/26 13:08:34 by bworrawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_free(char *str)
{
	if (*str)
		free(str);
	return (0);
}

int	ft_free_map(char **map)
{
	int	i;

	if (!map && !*map)
	{
		return (0);
	}
	i = -1;
	while (map[++i])
		if (map[i])
			free(map[i]);
	free(map[i]);
	free(map);
	return (0);
}

void	clean_split(char **path)
{
	int	i;

	if (!path && !*path)
		exit (0);
	i = 0;
	while (path[i])
	{
		free(path[i]);
		i++;
	}
	free(path[i]);
	free(path);
}
