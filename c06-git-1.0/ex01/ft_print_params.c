/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 06:15:41 by dhadding          #+#    #+#             */
/*   Updated: 2022/12/05 15:48:21 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	*newline;
	int		count;

	count = 1;
	newline = "\n";
	if (argc)
	{
		while (argv[count] != NULL)
		{
			ft_putstr(argv[count]);
			ft_putstr(newline);
			count++;
		}
	}
	return (0);
}
