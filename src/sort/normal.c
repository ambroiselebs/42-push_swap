/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-20 15:42:30 by aberenge          #+#    #+#             */
/*   Updated: 2024-12-20 15:42:30 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	r_stacks(t_stack_node **a, t_stack_node **b, t_stack_node *cheapest)
{
	while (*a != cheapest->target_node && *b != cheapest)
		rr(a, b);
	set_current_pos(*a);
	set_current_pos(*b);
}

void	rr_stacks(t_stack_node **a, t_stack_node **b, t_stack_node *cheapest)
{
	while (*a != cheapest->target_node && *b != cheapest)
		rrr(a, b);
	set_current_pos(*a);
	set_current_pos(*b);
}

void	finish_r(t_stack_node **stack, t_stack_node *top, char name)
{
	while (*stack != top)
	{
		if (name == 'a')
		{
			if (top->above_median)
				ra(stack);
			else
				rra(stack);
		}
		else if (name == 'b')
		{
			if (top->above_median)
				rb(stack);
			else
				rrb(stack);
		}
	}
}

void	move_nodes(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*cheapest;

	cheapest = get_cheapest(*b);
	if (cheapest->above_median && cheapest->target_node->above_median)
		r_stacks(a, b, cheapest);
	else if (!cheapest->above_median && !cheapest->target_node->above_median)
		rr_stacks(a, b, cheapest);
	finish_r(b, cheapest, 'b');
	finish_r(a, cheapest->target_node, 'a');
	pa(a, b);
}
