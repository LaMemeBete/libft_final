/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:35:59 by mborouch          #+#    #+#             */
/*   Updated: 2017/11/09 12:36:02 by mborouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	const char *s1_p;
	const char *s2_p;

	if (*s2 == '\0')
		return ((char*)s1);
	while (*s1 != '\0')
	{
		s1_p = s1;
		s2_p = s2;
		while (*s2_p != '\0' && *s1_p == *s2_p)
		{
			s1_p++;
			s2_p++;
		}
		if (*s2_p == '\0')
			return ((char*)s1);
		s1++;
	}
	return (NULL);
}
