/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrimino_collide.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/02 14:51:17 by alaulom           #+#    #+#             */
/*   Updated: 2016/04/02 14:51:21 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	tetrimino_case_check(t_trimino *tetrimino, int x, int y)
{
	if (tetrimino->cases[x + (y * SIZE)] == '.')
		return (0);
	return (1);
}

static int	tetrimino_case_collide(t_trimino *tetrimino, int x, int y)
{
	int	collide;

	collide = 0;
	if (y < SIZE - 1)
		if (tetrimino_case_check(tetrimino, x, y + 1))
			collide++;
	if (y > 0)
		if (tetrimino_case_check(tetrimino, x, y - 1))
			collide++;
	if (x < SIZE - 1)
		if (tetrimino_case_check(tetrimino, x + 1, y))
			collide++;
	if (x > 0)
		if (tetrimino_case_check(tetrimino, x - 1, y))
			collide++;
	return (collide);
}

void		tetrimino_check_collide(t_trimino *tetrimino)
{
	int	collide;
	int	i;

	i = 0;
	collide = 0;
	while (tetrimino->cases[i])
	{
		if (tetrimino_case_check(tetrimino, i % SIZE, i / SIZE))
			collide += tetrimino_case_collide(tetrimino, i % SIZE, i / SIZE);
		i++;
	}
	if (collide != 6 && collide != 8)
		error("Wrong tetriminos form");
}
