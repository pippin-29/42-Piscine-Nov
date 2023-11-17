/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:41:50 by dhadding          #+#    #+#             */
/*   Updated: 2022/12/01 11:08:45 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_strlen.c"

int	main(void)
{
	char arr[90];
	char *ptr;

	ptr = "My Stirring";
	printf("String Length for '%s' is '%d'\n", ptr, ft_strlen(ptr));
	return (0);
}
