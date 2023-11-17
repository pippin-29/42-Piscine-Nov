/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 08:05:05 by dhadding          #+#    #+#             */
/*   Updated: 2022/11/30 09:04:41 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "ft_strncmp.c"

int main(void)
{
	printf("My Function | S1: abcd | S2: abcd | Result: %d\n", ft_strncmp("abcd", "abcd", 3));
	printf("My Function | S1: abCd | S2: abcd | Result: %d\n", ft_strncmp("abCd", "abcd", 4));
	printf("My Function | S1: abcd | S2: abCd | Result: %d\n", ft_strncmp("abcd", "abCd", 4));
	printf("Lib Function| S1: abcd | S2: abcd | Result: %d\n", strncmp("abcd", "abcd", 3));
	printf("Lib Function| S1: abCd | S2: abcd | Result: %d\n", strncmp("abCd", "abcd", 3));
	printf("Lib Function| S1: abcd | S2: abCd | Result: %d\n", strncmp("abcd", "abCd", 3));
	return (0);
}
