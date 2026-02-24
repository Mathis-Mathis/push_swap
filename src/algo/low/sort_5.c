/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 09:00:00 by mmousli           #+#    #+#             */
/*   Updated: 2026/02/24 08:29:21 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	stack_size(t_node *a)
{
	int	i;

	i = 0;
	while (a)
	{
		i++;
		a = a->next;
	}
	return (i);
}

static int	min_value(t_node *a)
{
	int	min;

	min = a->value;
	while (a)
	{
		if (a->value < min)
			min = a->value;
		a = a->next;
	}
	return (min);
}

static int	min_pos(t_node *a)
{
	int	min;
	int	pos;
	int	i;

	min = min_value(a);
	pos = 0;
	i = 0;
	while (a)
	{
		if (a->value == min)
			pos = i;
		i++;
		a = a->next;
	}
	return (pos);
}

static void	bring_min_to_top(t_node **a)
{
	int	pos;
	int	size;

	size = stack_size(*a);
	pos = min_pos(*a);
	if (pos <= size / 2)
	{
		while (pos-- > 0)
			rotate_a(a, 1);
	}
	else
	{
		while (pos++ < size)
			reverse_rotate_a(a, 1);
	}
}

void	sort_5(t_node **a, t_node **b)
{
	int	size;

	if (!a || !*a)
		return ;
	size = stack_size(*a);
	while (size > 3)
	{
		bring_min_to_top(a);
		push_b(a, b);
		size--;
	}
	sort_3(a);
	while (*b)
		push_a(a, b);
}
