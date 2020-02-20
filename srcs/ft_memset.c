/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 05:26:13 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/19 14:54:51 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = b;

	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
