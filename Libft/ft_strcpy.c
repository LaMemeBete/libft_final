/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:34:49 by mborouch          #+#    #+#             */
/*   Updated: 2017/11/09 12:34:52 by mborouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, const char *src)
{
	char *s;

	s = dst;
	while (*src != '\0')
		*dst++ = *src++;
	*dst = '\0';
	return (s);
}