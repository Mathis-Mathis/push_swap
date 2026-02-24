/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2_3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 09:00:00 by mmousli           #+#    #+#             */
/*   Updated: 2026/02/24 08:28:45 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_node **a)
{
	if (!a || !*a || !(*a)->next)
		return ;
	if ((*a)->value > (*a)->next->value)
		swap_a(a, 1);
}

void	sort_3(t_node **a)
{
	int	x;
	int	y;
	int	z;

	if (!a || !*a || !(*a)->next || !(*a)->next->next)
		return ;
	x = (*a)->value;
	y = (*a)->next->value;
	z = (*a)->next->next->value;
	if (x > y && y < z && x < z)
		swap_a(a, 1);
	else if (x > y && y > z)
	{
		swap_a(a, 1);
		reverse_rotate_a(a, 1);
	}
	else if (x > y && y < z && x > z)
		rotate_a(a, 1);
	else if (x < y && y > z && x < z)
	{
		swap_a(a, 1);
		rotate_a(a, 1);
	}
	else if (x < y && y > z && x > z)
		reverse_rotate_a(a, 1);
}
