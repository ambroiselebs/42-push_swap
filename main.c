/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-18 20:59:12 by aberenge          #+#    #+#             */
/*   Updated: 2024-12-18 20:59:12 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;
	int				argv_splited;

	a = NULL;
	b = NULL;
	(void) b;
	if (argc < 2)
		return (ft_printf("Error\n"), 1);
	argv_splited = (argc == 2);
	if (argv_splited)
		argv = ft_split(argv[1], ' ');
	init_stack(&a, argv + !argv_splited, argv_splited);
	if (argv_splited && argv)
		ft_free_tab(argv);
	free_stack(&a);
}
