/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 07:11:51 by dhadding          #+#    #+#             */
/*   Updated: 2022/11/30 07:50:52 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcmp.c"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("My Function | S1: abcd | S2: abcd | Result: %d\n", ft_strcmp("abcd", "abcd"));
	printf("My Function | S1: abcd | S2: abCd | Result: %d\n", ft_strcmp("abcd", "abCd"));
    printf("My Function | S1: Abcd | S2: abcd | Result: %d\n", ft_strcmp("Abcd", "abcd"));	
	printf("Lib Function| S1: abcd | S2: abcd | Result: %d\n", strcmp("abcd", "abcd"));
	printf("Lib Function| S1: abcd | S2: abCd | Result: %d\n", strcmp("abcd", "abCd"));
	printf("Lib Function| S1: Abcd | S2: abcd | Result: %d\n", strcmp("Abcd", "abcd"));

	return (0);
}
