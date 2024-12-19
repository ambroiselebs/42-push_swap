/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-19 13:59:49 by aberenge          #+#    #+#             */
/*   Updated: 2024-12-19 13:59:49 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	push(t_stack_node **dest, t_stack_node **src)
{
	t_stack_node	*to_push;

	if (*src == NULL)
		return ;
	to_push = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	to_push->prev = NULL;
	if (*dest == NULL)
	{
		*dest = to_push;
		to_push->next = NULL;
	}
	else
	{
		to_push->next = *dest;
		to_push->next->prev = to_push;
		*dest = to_push;
	}
}

void	pa(t_stack_node **a, t_stack_node **b, int checker)
{
	push(a, b);
	if (!checker)
		ft_printf("pa\n");
}

void	pb(t_stack_node **a, t_stack_node **b, int checker)
{
	push(b, a);
	if (!checker)
		ft_printf("pb\n");
}
