/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamashil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 17:39:22 by pamashil          #+#    #+#             */
/*   Updated: 2017/06/22 12:21:16 by pamashil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned char		*str1;
	const unsigned char	*str2;

	if (n)
	{
		str1 = (unsigned char *)s1;
		str2 = (const unsigned char *)s2;
		while (n-- != 0)
			if ((*str1++ = *str2++) == (unsigned char)c)
				return (str1);
	}
	return (0);
}
