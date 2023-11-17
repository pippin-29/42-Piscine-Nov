/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 07:05:41 by dhadding          #+#    #+#             */
/*   Updated: 2022/12/01 07:41:21 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_strstr.c"

int main(void)
{
	char s1[] = "Hello World, Woo..";
	char s2[] = "World";
	char *p = ft_strstr(s1, s2);

	if (p) {
		printf("String found\n");
		printf("First occurrence of string '%s' in '%s' is '%s'", s2, s1, p);
	} else {
		printf("String not found\n");
	}
	return (0);
}
