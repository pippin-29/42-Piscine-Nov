/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 07:16:14 by dhadding          #+#    #+#             */
/*   Updated: 2022/12/15 08:21:27 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	str = malloc(1024);
	i = 0;
	j = 0;
	k = 0;
	while (i != size)
	{
		while (strs[i][j] != 0)
		{
			str[k] = strs[i][j];
			j++;
			k++;
		}
		if (i != size - 1)
			str[k++] = *sep;
		j = 0;
		i++;
	}
	return (str);
}
