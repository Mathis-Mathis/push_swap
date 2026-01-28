/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 00:08:38 by mmousli           #+#    #+#             */
/*   Updated: 2026/01/28 01:28:19 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	parse_multi_args(t_node **stack_a, int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		add_back(stack_a, new_node(atoi(argv[i])));
		i++;
	}
}

void	parse_args(t_node **stack_a, int argc, char **argv)
{

	if(!check_args(argc, argv))
	{
		parse_multi_args(stack_a, argc, argv);
	}
}


