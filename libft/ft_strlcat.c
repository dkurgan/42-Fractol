/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurgan <dkurgan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 13:29:20 by dkurgan           #+#    #+#             */
/*   Updated: 2019/03/05 23:15:23 by dkurgan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s1[len] && len < size)
		len++;
	i = len;
	while (s2[len - i] && len + 1 < size)
	{
		s1[len] = s2[len - i];
		len++;
	}
	if (i < size)
		s1[len] = '\0';
	return (i + ft_strlen(s2));
}
