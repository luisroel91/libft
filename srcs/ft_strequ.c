/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 15:09:42 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/19 11:47:17 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_libft.h"

int	ft_strequ(char const *s1, chat const *s2)
{
	if (ft_strcmp(s1, s2) == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
