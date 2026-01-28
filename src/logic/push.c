/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 21:46:14 by mmousli           #+#    #+#             */
/*   Updated: 2026/01/27 23:12:22 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp;

	if (!stack_b || !*stack_b)
		return ;

	tmp = *stack_b;
	*stack_b = tmp->next;
	if (*stack_b)
		(*stack_b)->prev = NULL;

	tmp->next = *stack_a;
	if (*stack_a)
		(*stack_a)->prev = tmp;

	tmp->prev = NULL;
	*stack_a = tmp;
}



void	push_b(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp;

	if (!stack_b || !*stack_b)
		return ;

	tmp = *stack_a;
	*stack_a = tmp->next;
	if (*stack_a)
		(*stack_a)->prev = NULL;

	tmp->next = *stack_b;
	if (*stack_b)
		(*stack_b)->prev = tmp;

	tmp->prev = NULL;
	*stack_b = tmp;
}
