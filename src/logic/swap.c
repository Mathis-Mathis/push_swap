/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 07:26:42 by mmousli           #+#    #+#             */
/*   Updated: 2026/02/24 07:27:06 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_node **stack_a, int print)
{
	t_node	*first;
	t_node	*second;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	first = *stack_a;
	second = (*stack_a)->next;
	first->next = second->next;
	if (second->next)
		second->next->prev = first;
	second->prev = NULL;
	second->next = first;
	first->prev = second;
	*stack_a = second;
	if (print)
		write(1, "sa\n", 3);
}

void	swap_b(t_node **stack_b, int print)
{
	t_node	*first;
	t_node	*second;

	if (!stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	first = *stack_b;
	second = (*stack_b)->next;
	first->next = second->next;
	if (second->next)
		second->next->prev = first;
	second->prev = NULL;
	second->next = first;
	first->prev = second;
	*stack_b = second;
	if (print)
		write(1, "sb\n", 3);
}

void	swap_both(t_node **stack_a, t_node **stack_b)
{
	swap_a(stack_a, 0);
	swap_b(stack_b, 0);
	write(1, "ss\n", 3);
}
