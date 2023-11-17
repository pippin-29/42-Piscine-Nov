/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:42:42 by dhadding          #+#    #+#             */
/*   Updated: 2022/11/29 12:55:06 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		i;
	int		return_value;
	char	c;

	i = 0;
	return_value = 1;
	while (*(str + i) != 0)
	{
		c = *(str + i);
		if (c < 32 || c > 126)
		{
			return_value = 0;
		}
	i++;
	}
	return (return_value);
}
