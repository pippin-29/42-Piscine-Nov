/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 08:55:41 by dhadding          #+#    #+#             */
/*   Updated: 2022/12/12 07:56:53 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char *ft_strcat(char *dest, char *src)
{
	int d;
	int s;
	
	d = 0;
	s = 0;
	while (*(dest + d) != 0)
		d++;
	while (*(src + s) != 0)
	{
		*(dest + d + s) = *(src + s);
		s++;
	}
	*(dest + d + s) = '\0';
	return (dest);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;
	
	i = 0;
	str = "";
	if (size == 0)
	{
		str = malloc(sizeof(str));
		return (str);
	}
	if (size > 0)
	{
		str = malloc(size);
		while (strs[i] != NULL)
		{
			ft_strcat(str, strs[i]); 
			ft_strcat(str, sep);
			i++;
		}
		return (str);
	}
	return (str);
}

