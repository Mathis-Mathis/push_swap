/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   low_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 09:00:00 by mmousli           #+#    #+#             */
/*   Updated: 2026/02/24 08:28:39 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	stack_size(t_node *a)
{
	int	i;

	i = 0;
	while (a)
	{
		i++;
		a = a->next;
	}
	return (i);
}

void	low_sort(t_node **a, t_node **b)
{
	int	size;

	if (!a || !*a)
		return ;
	size = stack_size(*a);
	if (size == 2)
		sort_2(a);
	else if (size == 3)
		sort_3(a);
	else if (size <= 5)
		sort_5(a, b);
}
