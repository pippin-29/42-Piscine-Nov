/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:05:54 by dhadding          #+#    #+#             */
/*   Updated: 2022/12/13 10:30:28 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;
	char	set;

	i = 0;
	while (*(str + i) != 0)
	{
		set = *(str + i);
		if (set >= 65 && set <= 90)
		{
			*(str + i) += 32;
		}
		else
		{
			*(str + i) = *(str + i);
		}
		i++;
	}
	return (str);
}

char	*ft_strupcase(char *str)
{
	int		i;
	char	set;

	i = 0;
	while (*(str + i) != 0)
	{
		set = *(str + i);
		if (set >= 97 && set <= 122)
		{
			*(str + i) -= 32;
		}
		else
		{
			*(str + i) = *(str + i);
		}
		i++;
	}
	return (str);
}

int	ft_str_is_alpha(char *str)
{
	int		i;
	int		return_value;	
	char	c;

	i = 0;
	return_value = 1;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c < 65 || (c > 90 && c < 97) || c > 122)
		{
			return_value = 0;
		}
		i++;
	}
	return (return_value);
}


char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (ft_str_is_alpha(&str[0]) == 1)
		{
			ft_strlowcase(&str[0]);
		}
		if ((str[i] == ' ') || (str[i] == '+') || (str[i] == '-'))
		{
			ft_strupcase(&str[i + 1]);
		}
		i++;
	}
	return (str);
}
