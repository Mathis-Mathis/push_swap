/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 10:28:56 by mmousli           #+#    #+#             */
/*   Updated: 2026/01/28 10:31:38 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str)
{
	long	nb;
	int		sign;
	int		i;

	nb = 0;
	sign = 1;
	i = 0;

	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}

	if (!str[i])
		print_error();

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			print_error();

		nb = nb * 10 + (str[i] - '0');

		if ((nb * sign) > INT_MAX || (nb * sign) < INT_MIN)
			print_error();

		i++;
	}

	return ((int)(nb * sign));
}

