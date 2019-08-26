/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurgan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 14:28:03 by dkurgan           #+#    #+#             */
/*   Updated: 2019/03/06 18:52:10 by dkurgan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(f)(t_list *elem))
{
	t_list	*first;
	t_list	*current;

	if (lst == NULL)
		return (NULL);
	first = f(lst);
	current = first;
	while (lst->next)
	{
		lst = lst->next;
		current->next = f(lst);
		if (!(current->next))
		{
			free(current->next);
			return (NULL);
		}
		current = current->next;
	}
	return (first);
}
