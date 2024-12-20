/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-20 15:01:43 by aberenge          #+#    #+#             */
/*   Updated: 2024-12-20 15:01:43 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	small_sort(t_stack_node **a)
{
	t_stack_node	*highest;

	highest = get_highest(*a);
	if (*a == highest)
		ra(a, 0);
	else if ((*a)->next == highest)
		rra(a, 0);
	if ((*a)->value > (*a)->next->value)
		sa(a, 0);
}

void	handle_five(t_stack_node **a, t_stack_node **b)
{
	while (stack_len(*a) > 3)
	{
		init_nodes(*a, *b);
		finish_r(a, get_smallest(*a), 'a');
		pb(a, b, 0);
	}
}
