/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 14:30:17 by mmousli           #+#    #+#             */
/*   Updated: 2026/01/31 16:18:51 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

t_node	*new_node(int value);
void	add_back(t_node **stack, t_node *new_node);
void	print_stacks(t_node *a, t_node *b);

void	swap_a(t_node **stack_a);
void	swap_b(t_node **stack_b);
void	swap_both(t_node **stack_a, t_node **stack_b);

void	push_a(t_node **stack_a, t_node **stack_b);
void	push_b(t_node **stack_a, t_node **stack_b);

void	rotate_a(t_node **stack_a);
void	rotate_b(t_node **stack_b);
void	rotate_both(t_node **stack_a, t_node **stack_b);

void	parse_args(t_node **stack_a, int argc, char **argv);

void	print_error(void);

int		ft_atoi(const char *str);

#endif
