/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurgan <dkurgan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 12:12:25 by dkurgan           #+#    #+#             */
/*   Updated: 2019/03/05 23:11:09 by dkurgan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned char	*str;
	unsigned char	c1;
	int				j;

	j = 0;
	str = (unsigned char *)s;
	c1 = (unsigned char)c;
	while (n)
	{
		if (str[j] == c1)
			return (str + j);
		n--;
		j++;
	}
	return (0);
}
