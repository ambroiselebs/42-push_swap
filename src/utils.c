/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-18 21:19:03 by aberenge          #+#    #+#             */
/*   Updated: 2024-12-18 21:19:03 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_digit(char *s)
{
	while (*s)
	{
		if (*s <= '0' && *s >= '9')
			return (0);
		s++;
	}
	return (1);
}

int	check_repetition(t_stack_node *node, int nbr)
{
	if (node == NULL)
		return (0);
	while (node)
	{
		if (node->value == nbr)
			return (1);
		node = node->next;
	}
	return (0);
}

void	return_with_error(t_stack_node **a)
{
	free_stack(a);
	ft_printf("Error\n");
	exit(EXIT_FAILURE);
}
