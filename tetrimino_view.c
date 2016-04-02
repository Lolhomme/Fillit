/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrimino_view.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/02 14:52:11 by alaulom           #+#    #+#             */
/*   Updated: 2016/04/02 14:52:13 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	tetrimino_print(t_trimino *tetrimino)
{
	int	i;

	i = 0;
	while (tetrimino->cases[i])
	{
		ft_putchar(tetrimino->cases[i]);
		if ((i + 1) % 4 == 0)
			ft_putchar('\n');
		i++;
	}
}

void	tetrimino_view(t_trimino *tetriminos)
{
	t_trimino	*lst;

	lst = tetriminos;
	while (lst)
	{
		tetrimino_print(lst);
		ft_putnbr(tetrimino_pos(lst));
		lst = lst->next;
	}
	free(lst);
}

void	tetrimino_viewr(t_trimino *tetriminos)
{
	t_trimino	*lst;

	lst = tetriminos;
	while (lst)
	{
		tetrimino_print(lst);
		lst = lst->prev;
	}
}
