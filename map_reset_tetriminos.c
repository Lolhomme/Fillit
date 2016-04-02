/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_reset_tetriminos.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/02 14:44:38 by alaulom           #+#    #+#             */
/*   Updated: 2016/04/02 14:50:00 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	map_reset_tetriminos(t_map *map, t_trimino *tetriminos)
{
	t_trimino	*current;

	current = tetriminos;
	while (current)
	{
		map_unprint_tetrimino(map, current);
		tetriminos->x = -1;
		tetriminos->y = -1;
		current = current->next;
	}
}
