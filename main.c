/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/02 14:42:10 by alaulom           #+#    #+#             */
/*   Updated: 2016/04/02 14:48:29 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	t_trimino	*tetriminos;
	t_map		*map;
	char		buf[BUFFER + 1];
	int			end;

	end = 1;
	if (argc != 2)
		error("bad argument, need filename");
	ft_bzero(buf, BUFFER + 1);
	tetriminos = NULL;
	tetriminos = fillit(argv[1], buf, &end, tetriminos);
	if (!tetriminos)
		error("empty tetriminos");
	tetrimino_clean(tetriminos);
	if (end == 0)
		error("wrong end map");
	map = map_new();
	if (tetrimino_count(tetriminos) > 26)
		error("too many tetriminos");
	map_solve(map, tetriminos);
	map_view(map);
	return (0);
}
