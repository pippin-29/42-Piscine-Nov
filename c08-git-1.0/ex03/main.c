/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:56:58 by dhadding          #+#    #+#             */
/*   Updated: 2022/12/15 15:00:25 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}
	int main(void)
{
	t_point point;
	set_point(&point);
	return (0);
}
