/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 06:51:52 by dhadding          #+#    #+#             */
/*   Updated: 2022/12/08 07:15:31 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_fibonacci.c"
#include <stdio.h>

int	main(void)
{
	int n;
	int i;

	n = 9;
	i = 0;
	while (i <= 9)
	{
		printf("%d\n", ft_fibonacci(i));
		i++;
	}
	return (0);
}