/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 14:01:49 by mmousli           #+#    #+#             */
/*   Updated: 2025/12/27 15:15:29 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rotate_a(t_stack **stack_a)
{
	t_stack *first_node;
	t_stack *last_node;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	first_node = *stack_a;
	last_node = stack_last(*stack_a);
	*stack_a = first_node->next;
	last_node->next = first_node;
	first_node->next = NULL;
}

void	rotate_b(t_stack **stack_b)
{
	t_stack *first_node;
	t_stack *last_node;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	first_node = *stack_b;
	last_node = stack_last(*stack_b);
	*stack_b = first_node->next;
	last_node->next = first_node;
	first_node->next = NULL;
}

void	rotate_both(t_stack **stack_a, t_stack **stack_b)
{
	rotate_a(stack_a);
	rotate_b(stack_b);
}
