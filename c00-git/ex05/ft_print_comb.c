/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 10:19:52 by dhadding          #+#    #+#             */
/*   Updated: 2022/11/24 13:46:24 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	while (x <= '7')
	{	
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				ft_putchar(x, y, z);
				if (x != '7' || y != '8' || z != '9')
				{
					write(1, ", ", 2);
				}
				z++;
			}
			y++;
		}
		x++;
	}
}

/*
int	main(void){
	ft_print_comb();
	return (0);
}
*/
