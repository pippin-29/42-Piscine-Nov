/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 06:58:01 by dhadding          #+#    #+#             */
/*   Updated: 2022/12/06 08:56:37 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 *  - pointer to table is declared
 *  - count variable is declared
 *  - if min >= max, **range points to NULL and the function returns zero
 *  - table is given the memory allocation according to the size
 *    given by max - min
 *  - table is counted and assigned to *range
 *  - size of array is returned from count
 */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*table;
	int		count;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	table = (int *)malloc(sizeof(*table) * (max - min));
	if (table == NULL)
		return (-1);
	else
	{
		count = -1;
		while (++count < max - min)
		{
			table[count] = min + count;
		}
		*range = table;
		return (count);
	}
}
