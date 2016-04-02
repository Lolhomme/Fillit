/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_view.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/02 14:45:57 by alaulom           #+#    #+#             */
/*   Updated: 2016/04/02 14:50:37 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	map_view(t_map *map)
{
	int	x;
	int y;

	x = 0;
	y = 0;
	while (y < map->target + 1)
	{
		while (x < map->target + 1)
		{
			ft_putchar(map->cases[x][y]);
			x++;
		}
		y++;
		ft_putchar('\n');
		x = 0;
	}
}
