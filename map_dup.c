/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_dup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/02 14:43:35 by alaulom           #+#    #+#             */
/*   Updated: 2016/04/02 14:48:50 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_map	*map_dup(t_map *map)
{
	t_map	*bestmap;
	int		x;
	int		y;

	x = 0;
	y = 0;
	bestmap = map_new();
	while (x < MAX * SIZE)
	{
		y = 0;
		while (y < MAX * SIZE)
		{
			bestmap->cases[x][y] = map->cases[x][y];
			y++;
		}
		x++;
	}
	return (bestmap);
}
