/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:54:33 by dhadding          #+#    #+#             */
/*   Updated: 2022/11/24 13:40:26 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char i)
{
	write(1, &i, 1);
}

void	ft_print_numbers(void)
{
	char	x;

	x = '0';
	while (x <= '9')
	{
		ft_putchar(x);
		x++;
	}
}

/*
int	main(void){
	ft_print_numbers();
	return (0);
}
*/
