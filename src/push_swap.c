/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 14:29:22 by mmousli           #+#    #+#             */
/*   Updated: 2026/01/06 16:37:56 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(void)
{



	t_stack *stack_a;

	stack_a = NULL;
	add_back(&stack_a, create_node(10));
	add_back(&stack_a, create_node(15));
	add_back(&stack_a, create_node(20));
	add_back(&stack_a, create_node(25));


	print_stack(stack_a);


	//print_error();




	return (0);
}
