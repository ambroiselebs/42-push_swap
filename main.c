/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 20:59:12 by aberenge          #+#    #+#             */
/*   Updated: 2025/01/16 12:33:54 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*smallest;
	int				len_a;

	len_a = stack_len(*a);
	if (len_a == 5)
		handle_five(a, b);
	else
	{
		while (len_a-- > 3)
			pb(a, b);
	}
	small_sort(a);
	while (*b)
	{
		init_nodes(*a, *b);
		move_nodes(a, b);
	}
	set_current_pos(*a);
	smallest = get_smallest(*a);
	if (smallest->above_median)
		while (*a != smallest)
			ra(a);
	else
		while (*a != smallest)
			rra(a);
}

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;
	int				argv_splited;

	a = NULL;
	b = NULL;
	(void) b;
	if (argc < 2)
		return (ft_printf("\n"), 1);
	argv_splited = (argc == 2);
	if (argv_splited)
		argv = ft_split(argv[1], ' ');
	init_stack(&a, argv + !argv_splited, argv_splited);
	if (!is_sorted(a))
	{
		if (stack_len(a) == 2)
			sa(&a);
		else if (stack_len(a) == 3)
			small_sort(&a);
		else
			push_swap(&a, &b);
	}
	if (argv_splited && argv)
		ft_free_tab(argv);
	free_stack(&a);
}
