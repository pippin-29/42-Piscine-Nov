/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:41:44 by dhadding          #+#    #+#             */
/*   Updated: 2022/12/03 11:15:02 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		i;
	int		neg_count;
	int		convert;
	char	c;

	i = 0;
	convert = 0;
	neg_count = 0;
	while (str[i] != 0)
	{
		c = str[i];
		if (c > '0' && c < '9')
			convert = str[i] - '0' + convert * 10;
		if (c == '-')
			neg_count++;
		if ((c > 'a' && c < 'z') || (c < 'A' && c > 'Z'))
		{
			break ;
		}
		i++;
	}
	if ((neg_count % 2) != 0)
		convert = convert * -1;
	return (convert);
}
