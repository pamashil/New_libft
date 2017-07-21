/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamashil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 22:21:35 by pamashil          #+#    #+#             */
/*   Updated: 2017/06/22 12:33:58 by pamashil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n2)
{
	size_t n;

	if (*s2 == '\0')
		return ((char *)s1);
	n = ft_strlen(s2);
	while (*s1 != '\0' && n2-- >= n)
	{
		if (*s1 == *s2 && ft_memcmp(s1, s2, n) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
