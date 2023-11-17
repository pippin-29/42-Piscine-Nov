/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 07:44:16 by dhadding          #+#    #+#             */
/*   Updated: 2022/11/28 07:47:25 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_ultimate_div_mod.c"
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int a, b, *ptr1, *ptr2;

	a = 10;
	b = 2;
	ptr1 = &a;
	ptr2 = &b;
	ft_ultimate_div_mod(ptr1, ptr2);
	printf("10 / 2 = %d\n", a);
	printf("10 %% 2 = %d\n", b);
}

