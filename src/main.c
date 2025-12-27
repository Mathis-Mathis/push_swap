/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 15:11:56 by mmousli           #+#    #+#             */
/*   Updated: 2025/12/27 16:54:06 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>



int main(int argc, char **argv)
{
	t_stack *stack_a = NULL;
	t_stack *stack_b = NULL;
	t_stack *temp;
	int size;
	int i;
	int value;

	i = 0;
	size = argc - 1;

	while (i < size)
	{
		value = atoi(argv[i + 1]);
		t_stack *new_node = stack_new(value);
		if (!stack_a)
		{
			stack_a = new_node;
		}
		else
		{
			t_stack *last_node = stack_last(stack_a);
			last_node->next = new_node;
		}
		i++;
	}


	// stack a
	// stack_a = stack_new(1);
	// stack_last(stack_a)->next = stack_new(2);
	// stack_last(stack_a)->next = stack_new(3);
	// stack_last(stack_a)->next = stack_new(4);
	// stack_last(stack_a)->next = stack_new(5);
	// stack_last(stack_a)->next = stack_new(6);


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
	// reverse_rotate_a(&stack_a);
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
