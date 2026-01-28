/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 15:51:07 by mmousli           #+#    #+#             */
/*   Updated: 2026/01/27 21:39:06 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node  *new_node(int value)
{
    t_node  *node;

    node = malloc(sizeof(t_node));
    if (!node)
        return (NULL);
    node->value = value;
    node->prev = NULL;
    node->next = NULL;
    return (node);
}

void    add_back(t_node **stack, t_node *new_node)
{
    t_node  *last;

    if (!stack || !new_node)
        return ;
    if (!*stack)
    {
        *stack = new_node;
        new_node->prev = NULL;
        new_node->next = NULL;
        return ;
    }
    last = *stack;
    while (last->next)
        last = last->next;
    last->next = new_node;
    new_node->prev = last;
    new_node->next = NULL;
}



// A SUPPRIMER //
#include <stdio.h>
#define RESET   "\033[0m"
#define BOLD    "\033[1m"
#define DIM     "\033[2m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define RED     "\033[31m"
#define GRAY    "\033[90m"



void	print_stacks(t_node *a, t_node *b)
{
	t_node	*tmp_a;
	t_node	*tmp_b;

	tmp_a = a;
	tmp_b = b;

	printf("\n" YELLOW "========= STACKS =========\n" RESET);
	printf(YELLOW "   A        B\n" RESET);
	printf(YELLOW "--------------------------\n" RESET);

	while (tmp_a || tmp_b)
	{
		/* Stack A (Bleu) */
		if (tmp_a)
		{
			printf(BLUE "%4d" RESET, tmp_a->value);
			tmp_a = tmp_a->next;
		}
		else
			printf("   .");

		printf("    ");

		/* Stack B (Rouge) */
		if (tmp_b)
		{
			printf(RED "%4d" RESET, tmp_b->value);
			tmp_b = tmp_b->next;
		}
		else
			printf("   .");

		printf("\n");
	}

	printf(YELLOW "--------------------------\n\n" RESET);
}


