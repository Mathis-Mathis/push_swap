/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 07:12:02 by mmousli           #+#    #+#             */
/*   Updated: 2026/02/24 08:22:47 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "push_swap.h"

t_node	*new_node(int value)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->value = value;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

void	add_back(t_node **head, t_node *node)
{
	t_node	*temp;

	if (!head || !node)
		return ;
	if (!*head)
	{
		*head = node;
		return ;
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = node;
	node->prev = temp;
}

void	free_nodes(t_node **head)
{
	t_node	*temp;

	if (!head)
		return ;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
