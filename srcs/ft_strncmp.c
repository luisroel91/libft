/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiroel <luiroel@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 21:51:07 by luiroel           #+#    #+#             */
/*   Updated: 2020/02/09 22:48:33 by luiroel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 == *s2 && n)
	{
		if (*s1 == '\0' || *s2 == '\0')
		{
			break;
		}
		s1++;
		s2++;
		n--;
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}