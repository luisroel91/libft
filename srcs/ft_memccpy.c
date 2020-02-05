/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@studen.42.us.org>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 11:23:00 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/04 11:49:20 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** According to man, this copies bytes from string
** (assuming its char string?) src to string dst
** if the char c (as converted to a u char)
** occurs in the string src, copy starts and
** pointer to the byte after the copy of c
** in the string dst is returned. Otherwise
** n bytes are copied and a null pointer is
** returned
*/

#include "../includes/libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*dcpy;
	char	*scpy;
	char	conv;
	int		i;

	i = 0;
	dcpy = (char *)dst;
	scpy = (char *)src;
	conv = (unsigned char)(c);
	while (i < n)
	{
		if (scpy[i] == conv)
		{
			return (dcpy[i + 1]);
		}
		else
		{
			dcpy[i] = scpy[i];
		}
		i++;
	}
	return (NULL);
}