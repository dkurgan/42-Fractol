/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurgan <dkurgan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 13:25:50 by dkurgan           #+#    #+#             */
/*   Updated: 2019/02/17 22:58:04 by dkurgan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	const unsigned char *c1;
	const unsigned char *c2;

	c1 = (const unsigned char *)s1;
	c2 = (const unsigned char *)s2;
	if (s1 == s2)
		return (0);
	while (n > 0)
	{
		if (*c1 != *c2)
			return (*c1 - *c2);
		c1++;
		c2++;
		n--;
	}
	return (0);
}
