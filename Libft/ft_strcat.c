/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:35:08 by mborouch          #+#    #+#             */
/*   Updated: 2017/11/09 12:35:10 by mborouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
{
	char *s1p;

	s1p = s1;
	while (*s1p != '\0')
		s1p++;
	while (*s2 != '\0')
		*s1p++ = *s2++;
	*s1p = '\0';
	return (s1);
}
