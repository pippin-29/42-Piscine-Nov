/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 07:05:05 by dhadding          #+#    #+#             */
/*   Updated: 2022/12/01 07:42:51 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	temp;

	if (*to_find == 0)
	{
		return (str);
	}
	while (*str != 0)
	{
		if (*str == *to_find)
		{
			i = 0;
			temp = 0;
			while (*(to_find + i) != 0)
			{
				if (*(str + i) != *(to_find + i))
					temp = 1;
				i++;
			}
			if (temp == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
