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
t_stack_node	*get_highest(t_stack_node *stack);
t_stack_node	*get_smallest(t_stack_node *stack);

void			return_with_error(t_stack_node **a);
void			init_stack(t_stack_node **a, char **argv, int argv_splited);
void			free_stack(t_stack_node **stack);
void			append_node(t_stack_node **stack, int nbr);
void			small_sort(t_stack_node **a);
void			set_current_pos(t_stack_node *stack);
void			set_target(t_stack_node *a, t_stack_node *b);
void			set_cheapest(t_stack_node *b);
void			set_price(t_stack_node *a, t_stack_node *b);
void			r_stacks(t_stack_node **a, t_stack_node **b, t_stack_node *cheapest);
void			rr_stacks(t_stack_node **a, t_stack_node **b, t_stack_node *cheapest);
void			finish_r(t_stack_node **stack, t_stack_node *top, char name);
void			move_nodes(t_stack_node **a, t_stack_node **b);
void			init_nodes(t_stack_node *a, t_stack_node *b);
void			handle_five(t_stack_node **a, t_stack_node **b);

int				check_repetition(t_stack_node *node, int nbr);
int				check_digit(char *s);
int				stack_len(t_stack_node *stack);
int				is_sorted(t_stack_node *stack);

void			push(t_stack_node **dest, t_stack_node **src);
void			pa(t_stack_node **a, t_stack_node **b);
void			pb(t_stack_node **a, t_stack_node **b);
void			reverse_rotate(t_stack_node **stack);
void			rra(t_stack_node **a);
void			rrb(t_stack_node **b);
void			rrr(t_stack_node **a, t_stack_node **b);
void			rotate(t_stack_node **stack);
void			ra(t_stack_node **a);
void			rb(t_stack_node **b);
void			rr(t_stack_node **a, t_stack_node **b);
void			swap(t_stack_node **head);
void			sa(t_stack_node **a);
void			sb(t_stack_node **b);
void			ss(t_stack_node **a, t_stack_node **b);

#endif
