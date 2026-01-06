/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 14:30:17 by mmousli           #+#    #+#             */
/*   Updated: 2026/01/06 16:35:50 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_stack
{
	int				value;
	//int				index;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

void	print_error(void);

t_stack	*create_node(int value);

void	add_front(t_stack **stack, t_stack *new);
void	add_back(t_stack **stack, t_stack *new);
void	free_stack(t_stack **stack);
void	print_stack(t_stack *stack);

#endif
