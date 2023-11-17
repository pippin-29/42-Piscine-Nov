/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 06:22:51 by dhadding          #+#    #+#             */
/*   Updated: 2022/12/06 06:57:28 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 *   - Returns an array of ints between a minimum and a maximum value
 *   - pointer to table is declared
 *   - count is declared
 *   - if min is >= max, NULL is returned
 *   - table variable is assigned memory size of max - min
 *   - explicit conversion to pointer type int
 *   - if tab == NULL --> Return NULL (is this pointless?)
 *   - else count to size of array and assign incrementing values to each index
 *   - return table
 *   - count is assigned -1 to include the minimum value
 */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*table;
	int	count;

	if (min >= max)
		return (NULL);
	table = (int *)malloc (sizeof(*table) * (max - min));
	if (table == NULL)
	{
		return (NULL);
	}
	else
	{
		count = -1;
		while (count++ < max - min)
		{
			table[count] = min + count;
		}
		return (table);
	}
}
