/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 07:31:01 by mmousli           #+#    #+#             */
/*   Updated: 2026/02/24 08:39:31 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	has_dup_in_stack(t_node *a, int value)
{
	while (a)
	{
		if (a->value == value)
			return (1);
		a = a->next;
	}
	return (0);
}

static void	parse_one_arg(t_node **stack_a, char *arg)
{
	int		j;
	char	**tab;
	long	n;
	t_node	*node;

	tab = ft_split(arg, ' ');
	if (!tab || !tab[0])
		print_error();
	j = 0;
	while (tab[j])
	{
		if (!ft_atol_strict(tab[j], &n))
			(free_split(tab), print_error());
		if (n < -2147483648L || n > 2147483647L)
			(free_split(tab), print_error());
		if (has_dup_in_stack(*stack_a, (int)n))
			(free_split(tab), print_error());
		node = new_node((int)n);
		if (!node)
			(free_split(tab), print_error());
		add_back(stack_a, node);
		j++;
	}
	free_split(tab);
}

void	parse_args(t_node **stack_a, int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		parse_one_arg(stack_a, argv[i]);
		i++;
	}
}
