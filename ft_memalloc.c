/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamashil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 17:13:19 by pamashil          #+#    #+#             */
/*   Updated: 2017/06/22 12:20:58 by pamashil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*fresh;
	size_t	i;

	if ((fresh = malloc(size)) == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		fresh[i] = 0;
		i++;
	}
	return (fresh);
}
