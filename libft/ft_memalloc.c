/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurgan <dkurgan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 18:51:36 by dkurgan           #+#    #+#             */
/*   Updated: 2019/03/05 23:19:12 by dkurgan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*new;
	size_t	i;

	new = NULL;
	new = (char *)malloc(size);
	if (new)
	{
		i = 0;
		while (size-- > 0)
		{
			new[i] = 0;
			i++;
		}
	}
	return (new);
}
