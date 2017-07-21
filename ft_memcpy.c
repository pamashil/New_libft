/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamashil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 21:07:46 by pamashil          #+#    #+#             */
/*   Updated: 2017/06/22 12:22:07 by pamashil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*str;
	char		*dest;

	dest = (char *)dst;
	str = (const char *)src;
	while (n--)
		*dest++ = *str++;
	return (dst);
}
