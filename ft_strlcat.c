/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamashil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 18:33:53 by pamashil          #+#    #+#             */
/*   Updated: 2017/06/22 12:31:52 by pamashil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	x;
	char	*rdr;
	char	*cur;

	cur = (char *)ft_memchr(dest, '\0', size);
	if (cur == NULL)
		return (size + ft_strlen(src));
	rdr = (char *)src;
	x = (size_t)(cur - dest) + ft_strlen(rdr);
	while ((size_t)(cur - dest) < size - 1 && *rdr != '\0')
	{
		*cur = *rdr;
		cur++;
		rdr++;
	}
	*cur = '\0';
	return (x);
}
