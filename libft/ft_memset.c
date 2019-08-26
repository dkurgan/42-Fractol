/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurgan <dkurgan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 16:51:37 by dkurgan           #+#    #+#             */
/*   Updated: 2019/03/05 23:02:25 by dkurgan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				j;
	unsigned char	*str;

	str = (unsigned char *)b;
	j = 0;
	while (len > 0)
	{
		str[j] = c;
		len--;
		j++;
	}
	return (b);
}
