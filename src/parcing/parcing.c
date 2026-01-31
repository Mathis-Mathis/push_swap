/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 00:08:38 by mmousli           #+#    #+#             */
/*   Updated: 2026/01/31 14:59:43 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_duplicate(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	parse_args(t_node **stack_a, int argc, char **argv)
{
	int	i;

	i = 1;
	if (check_duplicate(argc, argv))
		{
		while (i < argc)
		{
			add_back(stack_a, new_node(ft_atoi(argv[i])));
			i++;
		}
	}
	else
		print_error();
}

