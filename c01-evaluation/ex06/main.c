/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 08:55:29 by dhadding          #+#    #+#             */
/*   Updated: 2022/11/28 09:14:43 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_strlen.c"
#include <stdio.h>

int	main(void)
{
	char *str;

	str = "L0L";
	printf("%d\n", ft_strlen(str));
	return (0);
}
