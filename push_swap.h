/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-18 21:01:49 by aberenge          #+#    #+#             */
/*   Updated: 2024-12-18 21:01:49 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>

typedef struct s_stack_node
{
	int					value;
	int					current_pos;
	int					final_index;
	int					push_price;
	int					above_median;
	int					cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;

t_stack_node	*find_last(t_stack_node *head);
t_stack_node	*get_cheapest(t_stack_node *stack);

void			return_with_error(t_stack_node **a);
void			init_stack(t_stack_node **a, char **argv, int argv_splited);
void			free_stack(t_stack_node **stack);
void			append_node(t_stack_node **stack, int nbr);

int				check_repetition(t_stack_node *node, int nbr);
int				check_digit(char *s);
int				stack_len(t_stack_node *stack);

void			push(t_stack_node **dest, t_stack_node **src);
void			pa(t_stack_node **a, t_stack_node **b, int checker);
void			pb(t_stack_node **a, t_stack_node **b, int checker);
void			reverse_rotate(t_stack_node **stack);
void			rra(t_stack_node **a, int checker);
void			rrb(t_stack_node **b, int checker);
void			rrr(t_stack_node **a, t_stack_node **b, int checker);
void			rotate(t_stack_node **stack);
void			ra(t_stack_node **a, int checker);
void			rb(t_stack_node **b, int checker);
void			rr(t_stack_node **a, t_stack_node **b, int checker);
void			swap(t_stack_node **head);
void			sa(t_stack_node **a, int checker);
void			sb(t_stack_node **b, int checker);
void			ss(t_stack_node **a, t_stack_node **b, int checker);

#endif
