/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 07:26:03 by dhadding          #+#    #+#             */
/*   Updated: 2022/11/28 07:37:31 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_div_mod.c"
#include <stdio.h>

int	main(void)
{
	int x, y, div, mod, *ptr_div, *ptr_mod;

	x = 10;
	y = 5;
	ptr_div = &div;
	ptr_mod = &mod;
	ft_div_mod(x, y, ptr_div, ptr_mod);
	printf("X(10) / Y(5) = %d\n", div);
	printf("X(10) %% Y(5) = %d\n", mod);
}
