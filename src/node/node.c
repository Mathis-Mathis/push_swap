/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 16:25:16 by mmousli           #+#    #+#             */
/*   Updated: 2025/12/27 16:26:32 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*stack_new(int value)
{
	t_stack *new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		print_error();
	new_node->value = value;
	new_node->next = NULL;
	return new_node;
}

t_stack *stack_last(t_stack *stack)
{
	if (!stack)
		return NULL;
	while (stack->next)
		stack = stack->next;
	return stack;
}
