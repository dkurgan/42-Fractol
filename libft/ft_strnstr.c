/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurgan <dkurgan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 13:29:37 by dkurgan           #+#    #+#             */
/*   Updated: 2019/03/05 23:06:46 by dkurgan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	unsigned int	count;
	int				i;
	int				j;

	count = 0;
	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (to_find[count])
		count++;
	while (str[i] && len >= count)
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
		len--;
	}
	return (NULL);
}
