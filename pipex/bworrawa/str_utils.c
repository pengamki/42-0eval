/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bworrawa <bworrawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:58:50 by bworrawa          #+#    #+#             */
/*   Updated: 2024/10/26 16:38:26 by bworrawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	*sd(char *str)
{
	return (ft_strdup(str));
}

char	*sanitize_str(char *str)
{
	char	**temp;
	char	*ret;

	temp = ft_split(str, ' ');
	if (!temp[0])
	{
		free(temp);
		return (ft_strdup(""));
	}
	ret = ft_strdup(temp[0]);
	ft_free_map(temp);
	return (ret);
}

char	*ft_join(char *str1, char *str2, char *str3, char *str4)
{
	long	len;
	char	*ret;

	len = 0;
	len += ft_strlen(str1);
	len += ft_strlen(str2);
	len += ft_strlen(str3);
	len += ft_strlen(str4);
	ret = (char *)malloc(sizeof(char) + (len + 1));
	if (!ret)
		return (NULL);
	*ret = '\0';
	ft_strlcat(ret, str1, len + 1);
	ft_strlcat(ret, str2, len + 1);
	ft_strlcat(ret, str3, len + 1);
	ft_strlcat(ret, str4, len + 1);
	if (str1)
		free(str1);
	if (str2)
		free(str2);
	if (str3)
		free(str3);
	if (str4)
		free(str4);
	return (ret);
}
