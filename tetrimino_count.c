/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrimino_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/02 14:51:31 by alaulom           #+#    #+#             */
/*   Updated: 2016/04/02 14:51:32 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	tetrimino_count(t_trimino *tetriminos)
{
	int			nb;
	t_trimino	*current;

	current = tetriminos;
	if (current)
	{
		nb = 1;
		while (current->next)
		{
			nb++;
			current = current->next;
		}
		return (nb);
	}
	return (0);
}
