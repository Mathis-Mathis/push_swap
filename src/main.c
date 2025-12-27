/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 15:11:56 by mmousli           #+#    #+#             */
/*   Updated: 2025/12/27 16:20:17 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

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



int main(int argc, char **argv)
{
	t_stack *stack_a = NULL;
	t_stack *stack_b = NULL;
	t_stack *temp;

	// stack a
	stack_a = stack_new(1);
	stack_last(stack_a)->next = stack_new(2);
	stack_last(stack_a)->next = stack_new(3);
	stack_last(stack_a)->next = stack_new(4);
	stack_last(stack_a)->next = stack_new(5);
	stack_last(stack_a)->next = stack_new(6);


	// stack b
	// stack_b = stack_new(1);
	// stack_last(stack_b)->next = stack_new(2);
	// stack_last(stack_b)->next = stack_new(3);


	// swap
	// swap_a(&stack_a);
	// swap_b(&stack_b);
	// swap_both(&stack_a, &stack_b);

	// push
	// push_a(&stack_a, &stack_b);
	// push_b(&stack_a, &stack_b);

	// rotate
	// rotate_a(&stack_a);
	// rotate_b(&stack_b);
	//rotate_both(&stack_a, &stack_b);

	// reverse rotate
	reverse_rotate_a(&stack_a);
	// reverse_rotate_b(&stack_b);
	// reverse_rotate_both(&stack_a, &stack_b);









	// Print stack a
	temp = stack_a;
	printf("Stack A: ");
	while (temp)
	{
		printf("%d ", temp->value);
		temp = temp->next;
	}
	printf("\n");

	// Print stack b
	temp = stack_b;
	printf("Stack B: ");
	while (temp)
	{
		printf("%d ", temp->value);
		temp = temp->next;
	}
	printf("\n");

	return (0);
}
