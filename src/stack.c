/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-18 21:14:15 by aberenge          #+#    #+#             */
/*   Updated: 2024-12-18 21:14:15 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	append_node(t_stack_node **stack, int nbr)
{
	t_stack_node	*node;
	t_stack_node	*last_node;

	if (stack == NULL)
		return ;
	node = malloc(sizeof(t_stack_node));
	if (node == NULL)
		return ;
	node->next = NULL;
	node->value = nbr;
	if (*stack == NULL)
	{
		*stack = node;
		node->prev = NULL;
	}
	else
	{
		last_node = find_last(*stack);
		last_node->next = node;
		node->prev = last_node;
	}
}

void	init_stack(t_stack_node **a, char **argv, int argv_splited)
{
	long	nbr;

	(void) argv_splited;
	while (*argv)
	{
		if (!check_digit(*argv))
			return_with_error(a);
		nbr = ft_atoi(*argv);
		if (nbr > INT_MAX || nbr < INT_MIN)
			return_with_error(a);
		if (check_repetition(*a, (int) nbr))
			return_with_error(a);
		append_node(a, nbr);
		argv++;
	}
}
