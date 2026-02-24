/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 14:30:17 by mmousli           #+#    #+#             */
/*   Updated: 2026/02/24 08:29:26 by mmousli          ###   ########.fr       */
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
void	add_back(t_node **head, t_node *node);
void	free_nodes(t_node **head);

void	push_a(t_node **stack_a, t_node **stack_b);
void	push_b(t_node **stack_a, t_node **stack_b);

void	swap_a(t_node **stack_a, int print);
void	swap_b(t_node **stack_b, int print);
void	swap_both(t_node **stack_a, t_node **stack_b);

void	rotate_a(t_node **stack_a, int print);
void	rotate_b(t_node **stack_b, int print);
void	rotate_both(t_node **stack_a, t_node **stack_b);

void	reverse_rotate_a(t_node **stack_a, int print);
void	reverse_rotate_b(t_node **stack_b, int print);
void	reverse_rotate_both(t_node **stack_a, t_node **stack_b);

void	parse_args(t_node **stack_a, int argc, char **argv);

void	print_error(void);

char	**ft_split(const char *str, char c);
void	free_split(char **tab);
int		ft_atol_strict(const char *s, long *out);

void	sort_2(t_node **a);
void	sort_3(t_node **a);
void	sort_5(t_node **a, t_node **b);
void	low_sort(t_node **a, t_node **b);

#endif
