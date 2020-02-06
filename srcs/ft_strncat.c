/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@studen.42.us.org>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 21:08:05 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/05 22:30:47 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncat(char *s1, char *s2, size_t n)
{
	char	*str;

	str = s1 + ft_strlen(s1);
	while (*s2 != '\0' && n)
	{
		*str++ = *s2++;
		n--;
	}
	*str = '\0';
	return (str);
}
