/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurgan <dkurgan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 19:57:03 by dkurgan           #+#    #+#             */
/*   Updated: 2019/03/05 23:06:20 by dkurgan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*f;
	int		j;
	int		l;

	l = size + 1;
	j = 0;
	f = (char *)malloc(l);
	if (f == 0)
		return (NULL);
	while (l > 0)
	{
		f[j] = '\0';
		l--;
		j++;
	}
	return (f);
}
