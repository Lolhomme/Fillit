/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/02 14:43:48 by alaulom           #+#    #+#             */
/*   Updated: 2016/04/02 14:49:06 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_map	*map_new(void)
{
	int		x;
	t_map	*map;

	x = 0;
	map = (t_map*)malloc(sizeof(t_map));
	map->cases = malloc(sizeof(char*) * (MAX * SIZE + 4));
	while (x < (MAX * SIZE))
	{
		map->cases[x] = ft_memalloc(MAX * SIZE + 4);
		ft_bzero(map->cases[x], (MAX * SIZE + 4));
		map->cases[x] = (char*)ft_memset(map->cases[x], '.', MAX * SIZE);
		x++;
	}
	map->cases[x] = ft_memalloc(MAX * SIZE + 4);
	ft_bzero(map->cases[x], MAX * SIZE + 4);
	map->count = 0;
	return (map);
}
