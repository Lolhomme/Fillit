/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 11:30:10 by dmoureu-          #+#    #+#             */
/*   Updated: 2015/12/14 15:51:37 by dmoureu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(char *s1, const char *s2)
{
	int x;

	x = 0;
	while (s1[x] == s2[x] && s1[x] != '\0' && s2[x] != '\0')
		x++;
	return ((unsigned char)s1[x] - (unsigned char)s2[x]);
}
