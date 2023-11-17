/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 09:01:40 by dhadding          #+#    #+#             */
/*   Updated: 2022/12/13 09:38:21 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	else if (nb > 2)
	{
		while (i < nb)
		{
			if (nb % i == 0)
			{
				return (0);
			}
			i++;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	if (nb <= 2)
		return (2);
	if (nb > 2)
	{
		while (ft_is_prime(i) != 1)
		{
			i++;
		}
	}
	return (i);
}
