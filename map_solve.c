/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_solve.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/02 14:45:19 by alaulom           #+#    #+#             */
/*   Updated: 2016/04/02 14:50:11 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_map	*map_solve(t_map *map, t_trimino *tetriminos)
{
	map->target = ft_sqrt(tetrimino_count(tetriminos) * SIZE) - 1;
	while (recursive(map, tetriminos))
	{
		if (map->count < 0)
		{
			tetriminos = map->current;
			map->count = 0;
		}
		else
		{
			while (tetriminos->prev)
				tetriminos = tetriminos->prev;
			map_reset_tetriminos(map, tetriminos);
			map->target++;
		}
	}
	return (map);
}
