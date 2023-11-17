/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:44:54 by dhadding          #+#    #+#             */
/*   Updated: 2022/12/01 07:02:58 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	d;
	unsigned int	s;

	d = 0;
	s = 0;
	while (*(dest + d) != 0)
	{
		d++;
	}
	while ((*(src + s) != 0) && (s < nb))
	{
		*(dest + d) = *(src + s);
		s++;
		d++;
	}
	*(dest + d) = 0;
	return (dest);
}
