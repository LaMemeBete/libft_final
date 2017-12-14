/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:36:07 by mborouch          #+#    #+#             */
/*   Updated: 2017/11/09 12:36:09 by mborouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t loc)
{
	size_t	s2len;
	int		res;

	if (*s2 == '\0')
		return ((char*)s1);
	s2len = ft_strlen(s2);
	res = 1;
	while (s2len <= loc && *s1 != '\0'
		&& (res = ft_strncmp(s1, s2, s2len)))
	{
		loc--;
		s1++;
	}
	if (res != 0)
		return (NULL);
	else
		return ((char *)s1);
}
