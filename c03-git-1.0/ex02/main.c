/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 09:33:51 by dhadding          #+#    #+#             */
/*   Updated: 2022/12/01 07:02:09 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strcat.c"

int	main(void)
{
	char str[100] = "Hello World!";

	printf("My Function | %s\n", ft_strcat(str, " What a lovely day!"));
	printf("Lib Function| %s\n", strcat(str, " What a lovely day!"));

	return (0);
}
