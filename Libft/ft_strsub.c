/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:40:08 by mborouch          #+#    #+#             */
/*   Updated: 2017/11/09 12:40:11 by mborouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	substr = ft_strnew(len);
	if (substr == NULL)
		return (NULL);
	s = s + start;
	i = 0;
	while (i < len)
	{
		substr[i] = s[i];
		i++;
	}
	return (substr);
}
