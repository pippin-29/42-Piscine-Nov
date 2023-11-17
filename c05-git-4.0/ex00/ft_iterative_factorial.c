/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 09:52:23 by dhadding          #+#    #+#             */
/*   Updated: 2022/12/12 08:42:35 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int		i;
	int		result;

	i = 1;
	result = 1;
	if (nb >= 0)
	{
		while (i++ < nb)
		{	
			result *= i;
		}
	}
	else
		result = 0;
	return (result);
}
