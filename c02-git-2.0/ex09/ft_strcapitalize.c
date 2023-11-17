/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:07:27 by dhadding          #+#    #+#             */
/*   Updated: 2022/11/30 06:31:47 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strcapitalize(char *str)
{
	int		i;
	char	set;
	char	check-alpha;
	char	check-upper;

	i = 0;
	while (*(str + i) != 0)
	{
		set = *(str + i);
		if ((set > 65 && set < 90) || (set > 97 && < 122))
		{
			check-alpha = 1;
		}
		else 
		{
			check-alpha = 0;
		}
		if (!((set > 65 && set < 90) || (set > 97 && < 122)))
		{
			*(str + i) = *(str + i);
			
		}


			
