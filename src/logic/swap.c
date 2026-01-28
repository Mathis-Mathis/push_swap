/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 20:50:12 by mmousli           #+#    #+#             */
/*   Updated: 2026/01/27 21:41:06 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_node **stack_a)
{
	t_node	*first;
	t_node	*second;
	int		tmp;

	// Verif
	if (stack_a == NULL)
		return;
	if (*stack_a == NULL)
		return;
	if ((*stack_a)->next == NULL)
		return;

	//recup 1er et 2eme node
	first = *stack_a;
	second = first->next;

	//var temp pour swap
	tmp = first->value;

	//swap
	first->value = second->value;
	second->value = tmp;
}

void	swap_b(t_node **stack_b)
{
	t_node	*first;
	t_node	*second;
	int		tmp;

	// Verif
	if (stack_b == NULL)
		return;
	if (*stack_b == NULL)
		return;
	if ((*stack_b)->next == NULL)
		return;

	//recup 1er et 2eme node
	first = *stack_b;
	second = first->next;

	//var temp pour swap
	tmp = first->value;

	//swap
	first->value = second->value;
	second->value = tmp;
}


void swap_both(t_node **stack_a, t_node **stack_b)
{
	swap_a(stack_a);
	swap_b(stack_b);
}
