/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@studen.42.us.org>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 05:26:13 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/03 18:50:15 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	char	*str;
	char	conv;
	size_t		i;
	
	i = 0;
	str = b;
	conv = (unsigned char)c;
	while (i < len) 
	{
		str[i] = conv;
		i++;
	}
	return (b);
}
