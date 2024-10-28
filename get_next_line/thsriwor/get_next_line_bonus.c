/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsriwor <thsriwor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:35:53 by thsriwor          #+#    #+#             */
/*   Updated: 2024/10/25 00:06:28 by thsriwor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*set_line(char *line_buffer)
{
	char	*left_c;
	ssize_t	i;

	i = 0;
	while (line_buffer[i] != '\n' && line_buffer[i] != '\0')
		i++;
	if (line_buffer[i] == 0 || line_buffer[1] == 0)
		return (NULL);
	left_c = ft_substr(line_buffer, i + 1, ft_strlen(line_buffer) - i);
	if (*left_c == 0)
	{
		free(left_c);
		left_c = NULL;
	}
	line_buffer[i + 1] = 0;
	return (left_c);
}

static char	*ft_strchr(char *s, int c)
{
	unsigned int	i;
	char			j;

	j = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == j)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == j)
		return ((char *) &s[i]);
	return (NULL);
}

static char	*fill_line_buffer(int fd, char *left_c, char *buffer)
{
	ssize_t	b_read;
	char	*temp;

	b_read = 1;
	while (b_read > 0)
	{
		b_read = read(fd, buffer, BUFFER_SIZE);
		if (b_read == -1)
		{
			free(left_c);
			return (NULL);
		}
		else if (b_read == 0)
			break ;
		buffer[b_read] = 0;
		if (!left_c)
			left_c = ft_strdup("");
		temp = left_c;
		left_c = ft_strjoin(temp, buffer);
		free(temp);
		temp = NULL;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (left_c);
}

char	*get_next_line(int fd)
{
	static char	*left_c[MAX_FD];
	char		*line;
	char		*buffer;

	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		free(buffer);
		left_c[fd] = NULL;
		buffer = NULL;
		return (NULL);
	}
	if (!buffer)
		return (NULL);
	line = fill_line_buffer(fd, left_c[fd], buffer);
	free(buffer);
	if (!line)
		return (NULL);
	left_c[fd] = set_line(line);
	return (line);
}
// int	main()
// {
// 	int	fd;
// 	char	*line;

// 	fd = open("get_next_line.h", O_RDONLY);
// 	int	i = 1;
// 	while (i < 33)
// 	{
// 		line = get_next_line(fd);
// 		printf("%d | %s", i, line);
// 		free(line);
// 		i++;
// 	}
// 	close(fd);
// }

// int	main()
// {
// 	int	fd1;
// 	char	*line1;

// 	fd1 = open("get_next_line.h", O_RDONLY);
// 	line1 = get_next_line(fd1);
// 	while (line1)
// 	{
// 		printf("%s", line1);
// 		free(line1);
// 		line1 = get_next_line(fd1);
// 	}
// 	free(line1);
// 	close(fd1);
// }

// int	main()
// {
// 	int	fd1;
// 	int	fd2;
// 	char	*line1;
// 	char	*line2;

// 	fd1 = open("get_next_line.h", O_RDONLY);
// 	fd2 = open("get_next_line_utils.c", O_RDONLY);
// 	line1 = get_next_line(fd1);
// 	line2 = get_next_line(fd2);
// 	while (line1 || line2)
// 	{
// 		printf("fd 1 | %s", line1);
// 		printf("fd 2 | %s", line2);
// 		free(line1);
// 		free(line2);
// 		line1 = get_next_line(fd1);
// 		line2 = get_next_line(fd2);
// 	}
// 	if (line1)
// 		free(line1);
// 	if (line2)
// 		free(line2);
// 	close(fd1);
// 	close(fd2);
// }