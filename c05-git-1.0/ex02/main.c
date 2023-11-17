/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 05:29:13 by dhadding          #+#    #+#             */
/*   Updated: 2022/12/08 06:14:03 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_iterative_power.c"
#include <stdio.h>

int	main(void)
{
	printf("4 * 4 * 4 * 4 = 256 = %d\n", ft_iterative_power(4, 4));
	printf("-4 * -4 * -4 * -4 = 256 = %d\n", ft_iterative_power(-4, 4));
	printf("0 to the power of 0 = 1 = %d\n", ft_iterative_power(0, 0));
	return (0);
}
