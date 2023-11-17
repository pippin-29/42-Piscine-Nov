/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:24:16 by dhadding          #+#    #+#             */
/*   Updated: 2022/11/29 11:58:51 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		return_value;
	int		i;
	char	c;

	i = 0;
	return_value = 1;
	while (*(str + i) != 0)
	{
		c = *(str + i);
		if (c < 97 || c > 122)
		{
			return_value = 0;
		}
	i++;
	}
	return (return_value);
}
