/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 07:18:41 by mmousli           #+#    #+#             */
/*   Updated: 2026/02/24 08:40:23 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	skip_sign(const char *s, int *i, int *sign)
{
	*i = 0;
	*sign = 1;
	if (s[*i] == '+' || s[*i] == '-')
	{
		if (s[*i] == '-')
			*sign = -1;
		(*i)++;
	}
	return (1);
}

static int	parse_digits_safe(const char *s, int i, long *n)
{
	*n = 0;
	if (s[i] < '0' || s[i] > '9')
		return (0);
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		if (*n > 9223372036854775807L / 10)
			return (0);
		*n = (*n) * 10 + (s[i] - '0');
		i++;
	}
	return (1);
}

int	ft_atol_strict(const char *s, long *out)
{
	int		i;
	int		sign;
	long	n;

	if (!s || !s[0] || !out)
		return (0);
	skip_sign(s, &i, &sign);
	if (!parse_digits_safe(s, i, &n))
		return (0);
	*out = n * sign;
	return (1);
}
