/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:24:16 by dhadding          #+#    #+#             */
/*   Updated: 2022/11/29 12:00:56 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		return_value;
	int		i;
	char	c;

	i = 0;
	return_value = 1;
	while (*(str + i) != 0)
	{
		c = *(str + i);
		if (c < 65 || c > 90)
		{
			return_value = 0;
		}
	i++;
	}
	return (return_value);
}
