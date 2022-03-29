/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 21:09:53 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/21 22:35:37 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "ft_printf.h"
# include "actions/actions.h"
# include "linkedlist_utils/linkedlist.h"
# include "get_next_line.h"

# define HUNDRED_PIVOT 26
# define NBR_CHUNKS 3
# define FIVEHUNDRED_PIVOT 50
# define FIVENBR_CHUNKS 9

# define RED  "\x1B[31m"
# define GREEN  "\x1B[32m"

int		find_min(t_list *stack);
int		find_max(t_list *stack);
int		get_index(t_list *stack, int look);
int		*convert_linkedlist(t_list *stack);
int		*selectionsort(int arr[], int n);
int		check_sorting(t_list	*stack);
void	least_moves_from_a(t_list	**stack_a, t_list	**stack_b);
void	least_moves_from_b(t_list	**stack_a, t_list	**stack_b);
void	push_nums_to_b(t_list **stack_a, t_list **stack_b, int pivot);
void	sort_two(t_list	**stack_a);
void	support_three(t_list **stack_a, int one, int two, int three);
void	sort_three(t_list **stack_a);
void	sort_five(t_list **stack_a, t_list **stack_b);
void	sort_hundred(t_list	*stack_a, t_list	*stack_b);
void	sort_fivehundred(t_list	*stack_a, t_list	*stack_b);
void	sort_less_than_hundred(t_list **stack_a, t_list **stack_b);

#endif
