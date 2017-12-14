/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:43:17 by mborouch          #+#    #+#             */
/*   Updated: 2017/11/09 12:43:20 by mborouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstadd(t_list **alst, void *content, size_t content_size)
{
	t_list	*new;

	if ((new = ft_lstnew(content, content_size)) == NULL)
		return (0);
	ft_lstlink(alst, new);
	return (1);
}
