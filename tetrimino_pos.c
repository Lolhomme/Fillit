/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrimino_pos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/02 14:51:56 by alaulom           #+#    #+#             */
/*   Updated: 2016/04/02 14:51:58 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	tetrimino_pos(t_trimino *tetrimino)
{
	int			pos;
	t_trimino	*tmp;

	pos = -1;
	tmp = tetrimino;
	while (tmp)
	{
		pos++;
		tmp = tmp->prev;
	}
	return (pos);
}
