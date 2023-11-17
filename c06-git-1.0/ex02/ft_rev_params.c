/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 06:15:41 by dhadding          #+#    #+#             */
/*   Updated: 2022/12/05 15:49:13 by dhadding         ###   ########.fr       */
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

	newline = "\n";
	count = 0;
	while (++count < argc)
	{
		ft_putstr(argv[argc - count]);
		ft_putstr(newline);
	}
	return (0);
}
