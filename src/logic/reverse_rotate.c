/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 14:01:49 by mmousli           #+#    #+#             */
/*   Updated: 2025/12/27 16:21:21 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	reverse_rotate_a(t_stack **stack_a)
{
	t_stack	*last_node;
	t_stack	*current;

	if (!(*stack_a) || !(*stack_a)->next)
		return ;
	last_node = *stack_a;
	while (last_node->next)
		last_node = last_node->next;
	current = *stack_a;
	while (current->next != last_node)
		current = current->next;
	current->next = NULL;
	last_node->next = *stack_a;
	*stack_a = last_node;
}


void	reverse_rotate_b(t_stack **stack_b)
{
	t_stack	*last_node;
	t_stack	*current;

	if (!(*stack_b) || !(*stack_b)->next)
		return ;
	last_node = *stack_b;
	while (last_node->next)
		last_node = last_node->next;
	current = *stack_b;
	while (current->next != last_node)
		current = current->next;
	current->next = NULL;
	last_node->next = *stack_b;
	*stack_b = last_node;
}


void	reverse_rotate_both(t_stack **stack_a, t_stack **stack_b)
{
	reverse_rotate_a(stack_a);
	reverse_rotate_b(stack_b);
}
