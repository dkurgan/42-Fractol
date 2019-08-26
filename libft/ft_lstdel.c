/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstdel.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurgan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 14:06:44 by dkurgan           #+#    #+#             */
/*   Updated: 2019/03/06 18:51:09 by dkurgan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*j;

	if (*alst)
	{
		while ((*alst) && alst)
		{
			j = (*alst)->next;
			(*del)((*alst)->content, (*alst)->content_size);
			ft_memdel((void **)alst);
			*alst = j;
		}
	}
	(*alst) = NULL;
}
