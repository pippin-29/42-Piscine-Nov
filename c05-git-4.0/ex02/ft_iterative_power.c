/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:08:14 by dhadding          #+#    #+#             */
/*   Updated: 2022/12/08 06:14:17 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int		i;
	int		result;

	result = 1;
	if (power > 0)
	{
		i = 0;
		while (i < power)
		{
			result *= nb;
			i++;
		}
	}
	else if (power < 0)
		return (0);
	else
		return (1);
	return (result);
}
