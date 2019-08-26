/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurgan <dkurgan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 14:06:05 by dkurgan           #+#    #+#             */
/*   Updated: 2019/03/03 00:04:15 by dkurgan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int j;

	j = 0;
	if (s == NULL || f == NULL)
		return ;
	while (*s)
	{
		f(j, s);
		s++;
		j++;
	}
}
