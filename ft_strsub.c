/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamashil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 23:45:49 by pamashil          #+#    #+#             */
/*   Updated: 2017/06/22 12:01:02 by pamashil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int s2, size_t n)
{
	char	*str;
	size_t	st;

	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(*str) * (n + 1));
	if (str == NULL)
		return (NULL);
	st = 0;
	while (st < n)
	{
		str[st] = s[s2 + st];
		st++;
	}
	str[st] = '\0';
	return (str);
}
