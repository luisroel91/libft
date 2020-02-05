/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@studen.42.us.org>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:50:02 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/05 15:00:37 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(char const *s1)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!str)
	{
		return (NULL);
	}
	else
	{
		while (s[i] != '\0')
		{
			str[i] = s[i];
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}