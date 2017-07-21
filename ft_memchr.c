/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamashil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 03:46:31 by pamashil          #+#    #+#             */
/*   Updated: 2017/06/22 12:21:35 by pamashil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	chr;
	size_t			x;

	str = (unsigned char *)s;
	chr = (unsigned char)c;
	x = 0;
	while (n > x)
	{
		if (str[x] == chr)
			return (str + x);
		x++;
	}
	return (NULL);
}
