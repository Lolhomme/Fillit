/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check_tetrimino.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/02 14:42:33 by alaulom           #+#    #+#             */
/*   Updated: 2016/04/02 14:48:40 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	map_check_tetrimino(t_map *map, t_trimino *tetrimino, int x, int y)
{
	int	i;
	int	cx;
	int	cy;

	cx = 0;
	cy = 0;
	i = 0;
	while (tetrimino->cases[i])
	{
		if (tetrimino->cases[i] == '#')
		{
			cx = (i % SIZE) + x;
			cy = (i / SIZE) + y;
			if (cx > map->target || cy > map->target)
				return (0);
			if ((map->cases[cx][cy] != '.') &&
				(map->cases[cx][cy] != tetrimino->color))
				return (0);
		}
		i++;
	}
	return (1);
}
