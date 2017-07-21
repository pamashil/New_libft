/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamashil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 18:27:36 by pamashil          #+#    #+#             */
/*   Updated: 2017/06/22 12:22:55 by pamashil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			x;
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	x = 0;
	while (len > x)
	{
		ptr[x] = c;
		x++;
	}
	return (b);
}
