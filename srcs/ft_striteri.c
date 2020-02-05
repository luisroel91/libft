/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@studen.42.us.org>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:10:49 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/05 14:13:50 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Same thing as striter except we're also passing
** the index to the function this time
*/

#include "../includes/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		while (s[i] != '\0')
		{
			f(i, s[i])
			i++;
		}
	}
}