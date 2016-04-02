/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/02 14:47:49 by alaulom           #+#    #+#             */
/*   Updated: 2016/04/02 14:47:51 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_trimino	*fillit(char *file, char *buf, int *end, t_trimino *tetriminos)
{
	int			fd;
	t_trimino	*tmp;
	int			i;

	if ((fd = open(file, O_RDONLY)) < 0)
		error("error");
	tmp = NULL;
	while ((i = read(fd, buf, BUFFER)) > 0)
	{
		if (!tetriminos)
		{
			tetriminos = tetrimino_new(buf, NULL, end);
			tmp = tetriminos;
		}
		else
		{
			tmp->next = tetrimino_new(buf, tmp, end);
			tmp = tmp->next;
		}
		ft_bzero(buf, BUFFER + 1);
	}
	if (close(fd) == -1)
		error("error");
	return (tetriminos);
}
