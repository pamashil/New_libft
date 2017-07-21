/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamashil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 11:05:56 by pamashil          #+#    #+#             */
/*   Updated: 2017/07/21 11:06:02 by pamashil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if ((c >= '\t' && c <= '\r') || c == 32)
		return (1);
	return (0);
}

int			ft_atoi(const char *c)
{
	int	value;
	int	sign;
	int	m;

	value = 0;
	sign = 1;
	m = 0;
	while (ft_isspace(*c))
		c += 1;
	if (*c == '+' || *c == '-')
	{
		if (*c == '-')
			sign = -1;
		c++;
	}
	while (ft_isdigit(*c))
	{
		value *= 10;
		value += (int)(*c - '0');
		c++;
		m++;
	}
	if (m > 19)
		return ((sign < 0) ? 0 : -1);
	return (value * sign);
}
