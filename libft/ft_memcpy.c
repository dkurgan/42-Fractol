/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurgan <dkurgan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 17:53:40 by dkurgan           #+#    #+#             */
/*   Updated: 2019/03/05 23:17:24 by dkurgan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	unsigned char	*st1;
	unsigned char	*st2;

	if (n == 0 || s1 == s2)
		return (s1);
	st1 = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	while (n)
	{
		*st1 = *st2;
		st1++;
		st2++;
		n--;
	}
	return (s1);
}
