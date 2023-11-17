/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 09:23:39 by dhadding          #+#    #+#             */
/*   Updated: 2022/12/08 09:24:53 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// while loop explained
// as long as I * I is les than the number i is not the square root
// as long as i greater than 46340, the result will overflow
// 
// simple if statement validates i as the square root of nb

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while ((i * i < nb) && (i <= 46340))
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}
