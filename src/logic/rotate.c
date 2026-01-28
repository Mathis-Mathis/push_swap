/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 23:14:40 by mmousli           #+#    #+#             */
/*   Updated: 2026/01/27 23:31:26 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_node **stack_a)
{
	t_node	*first;
	t_node	*last;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;

	first = *stack_a;
	last = *stack_a;
	while (last->next)
		last = last->next;

	*stack_a = first->next;
	(*stack_a)->prev = NULL;

	last->next = first;
	first->prev = last;
	first->next = NULL;
}

void	rotate_b(t_node **stack_b)
{
	t_node	*first;
	t_node	*last;

	if (!stack_b || !*stack_b || !(*stack_b)->next)
		return ;

	first = *stack_b;
	last = *stack_b;
	while (last->next)
		last = last->next;

	*stack_b = first->next;
	(*stack_b)->prev = NULL;

	last->next = first;
	first->prev = last;
	first->next = NULL;
}

void	rotate_both(t_node **stack_a, t_node **stack_b)
{
	rotate_a(stack_a);
	rotate_b(stack_b);
}
