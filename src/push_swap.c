/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 14:29:22 by mmousli           #+#    #+#             */
/*   Updated: 2026/01/28 00:57:19 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char ** argv)
{
	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;

	parse_args(&stack_a, argc, argv);

	// add_back(&stack_a, new_node(atoi(&argv[1][0])));

	print_stacks(stack_a, stack_b);










	// // stack a
	// add_back(&stack_a, new_node(2));
	// add_back(&stack_a, new_node(1));
	// add_back(&stack_a, new_node(3));
	// add_back(&stack_a, new_node(4));

	// // stack b
	// add_back(&stack_b, new_node(1));
	// add_back(&stack_b, new_node(2));

	// // Avant
	// printf("Before \n");
	// print_stacks(stack_a, stack_b);

	// // logic
	// rotate_both(&stack_a, &stack_b);
	// // Apres
	// printf("After \n");
	// print_stacks(stack_a, stack_b);

	return (0);
}

