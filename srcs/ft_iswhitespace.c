/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 15:13:09 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/18 15:13:15 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iswhitespace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
