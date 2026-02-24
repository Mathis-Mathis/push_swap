/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 07:28:59 by mmousli           #+#    #+#             */
/*   Updated: 2026/02/24 07:29:09 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_node **stack_a, int print)
{
	t_node	*first;
	t_node	*last;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	first = *stack_a;
	last = *stack_a;
	while (last->next)
		last = last->next;
	last->prev->next = NULL;
	last->prev = NULL;
	last->next = first;
	first->prev = last;
	*stack_a = last;
	if (print)
		write(1, "rra\n", 4);
}

void	reverse_rotate_b(t_node **stack_b, int print)
{
	t_node	*first;
	t_node	*last;

	if (!stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	first = *stack_b;
	last = *stack_b;
	while (last->next)
		last = last->next;
	last->prev->next = NULL;
	last->prev = NULL;
	last->next = first;
	first->prev = last;
	*stack_b = last;
	if (print)
		write(1, "rrb\n", 4);
}

void	reverse_rotate_both(t_node **stack_a, t_node **stack_b)
{
	reverse_rotate_a(stack_a, 0);
	reverse_rotate_b(stack_b, 0);
	write(1, "rrr\n", 4);
}
