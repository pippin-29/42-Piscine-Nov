/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 06:28:21 by dhadding          #+#    #+#             */
/*   Updated: 2022/11/28 06:34:27 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_ft.c"
#include <stdio.h>

int	main(void)
{
	int x;

	x = 43;
	printf("Before Function call: x = %4d\n", x);
	ft_ft(&x);
	printf("After function call:  x = %4d\n", x);
}
