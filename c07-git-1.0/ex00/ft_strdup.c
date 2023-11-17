/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 05:23:43 by dhadding          #+#    #+#             */
/*   Updated: 2022/12/06 06:21:53 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 *  - pointer to dest is declared
 *	- count is declared
 *	- src is counted
 *	- dest becomes a pointer to allocated memory
 *	- at the size of src bytes
 *	- count set to 0
 *	- if src had no size, then dest is NULL
 *	- the pointer returned from the function will be NULL
 *	- else src is copied to dest
 *	- dest is returned
 */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		count;

	count = 0;
	while (*(src + count))
	{
		count++;
	}
	dest = malloc(sizeof(src) * count);
	count = 0;
	if (dest == NULL)
	{
		return (0);
	}
	else
	{
		while (*(src + count))
		{
			*(dest + count) = *(src + count);
			count++;
		}
		*(dest + count) = '\0';
		return (dest);
	}
}
