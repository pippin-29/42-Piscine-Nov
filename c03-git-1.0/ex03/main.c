/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 09:33:51 by dhadding          #+#    #+#             */
/*   Updated: 2022/12/01 06:59:09 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strncat.c"

int	main(void)
{
	char str[100] = "Hello World!";

	printf("My Function | %s\n", ft_strncat(str, " What a lovely day!", 5));
	printf("Lib Function| %s\n", strncat(str, " What a lovely day!", 5));
	return (0);
}
