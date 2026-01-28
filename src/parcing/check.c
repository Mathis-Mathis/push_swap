/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 01:27:48 by mmousli           #+#    #+#             */
/*   Updated: 2026/01/28 01:35:07 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_args(int argc, char **argv)
{
	(void)argv;
	if (argc < 2)
		print_error();

	if (argc > 2)
	{
		check_duplicate(argc, argv);
		return (0);
	}

	return (1);
}


void	check_duplicate(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (atoi(argv[i]) == atoi(argv[j]))
				print_error();
			j++;
		}
		i++;
	}
}
