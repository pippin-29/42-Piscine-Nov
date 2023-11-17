/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:43:13 by dhadding          #+#    #+#             */
/*   Updated: 2022/11/29 10:55:36 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		i;
	int		return_value;
	char	c;

	i = 0;
	return_value = 1;
	while (*(str + i) != 0)
	{
		c = *(str + i);
		if (c < 48 || c > 57)
		{
			return_value = 0;
		}
	i++;
	}
	return (return_value);
}
