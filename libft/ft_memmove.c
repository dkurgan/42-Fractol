/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurgan <dkurgan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 12:38:59 by dkurgan           #+#    #+#             */
/*   Updated: 2019/03/05 23:14:46 by dkurgan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	const char	*a;
	const char	*a1;
	char		*b;
	char		*b1;

	b = s1;
	a = s2;
	if (b < a)
	{
		while (n--)
			*b++ = *a++;
	}
	else
	{
		a1 = a + (n - 1);
		b1 = b + (n - 1);
		while (n--)
			*b1-- = *a1--;
	}
	return (s1);
}
