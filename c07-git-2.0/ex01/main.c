/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 06:44:07 by dhadding          #+#    #+#             */
/*   Updated: 2022/12/06 06:57:52 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_range.c"
#include <stdio.h>

int	main(void)
{
	int *ptr;
	int count;
	int x;
	int y;


	x = 10;
	y = 15;
	ptr = ft_range(x, y);
	count = 0;
	while (count < y - x)
	{
		printf("%d\n", ptr[count]);
		count++;
	}
	return (0);
}
