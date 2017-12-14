/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:33:25 by mborouch          #+#    #+#             */
/*   Updated: 2017/11/09 12:33:27 by mborouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *strsrc;

	if (s == NULL)
		return (NULL);
	strsrc = (unsigned char*)s;
	while (n > 0 && *strsrc != (unsigned char)c)
	{
		n--;
		strsrc++;
	}
	if (n == 0)
		return (NULL);
	else
		return (strsrc);
}
