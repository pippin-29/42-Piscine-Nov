/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 06:58:01 by dhadding          #+#    #+#             */
/*   Updated: 2022/12/06 08:56:34 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_ultimate_range.c"
#include <stdio.h>

int	main(void)
{
	int		*range;
	int		count;
	int		rangesize;

	rangesize = ft_ultimate_range(&range, 10, 15);
	count = 0;
	while (count < rangesize)
	{
		printf("%d\n",range[count]);
		count++;
	}
	printf("Range Size is %d", rangesize);
	return (0);
}	
