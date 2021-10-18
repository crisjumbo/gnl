/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajumbo <ajumbo@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 09:16:31 by ajumbo            #+#    #+#             */
/*   Updated: 2021/10/18 12:06:00 by ajumbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*aux = NULL;

int	ft_strchr(char *s1, char c)
{
	int	i;
	
	i = 0;
	while (s1[i])
		if (s1[i++] == c)
			return (1);
	return (0);
}

char	*ft_strjoin(char *bff, char *aux)
{
	bff[BUFFER_SIZE] = '\0';
	free(aux);
}

char	*get_next_line(int fd)
{
	char	*bff;
	char	*line;
	int		bff_len;

	// Error handling
	if (fd == -1)
		return (0);
	// Give dimension to bff
	bff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!bff)
		return (0);
	if (aux)
	{
		//ft_strchop -> line && modify aux
	}
	while (!aux)
	{
		if (ft_strchr(bff, '\n'))
			line = ft_strjoin(aux, ft_strchop(bff, '\n'));
		else
		{
			read(fd, bff, BUFFER_SIZE);
			aux = ft_strjoin(bff, aux);
		}
	}
	return (line);
}
