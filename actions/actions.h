/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:03:15 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/29 14:55:52 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACTIONS_H
# define ACTIONS_H

# include "../linkedlist_utils/linkedlist.h"
# include "../ft_printf.h"

void	swap_a(t_list	**stack_a, int x);
void	swap_b(t_list	**stack_b, int y);
void	swap_a_b(t_list	**stack_a, t_list	**stack_b, int y);
void	push_a(t_list	**stack_a, t_list	**stack_b, int x);
void	push_b(t_list	**stack_a, t_list	**stack_b, int y);
void	rotate_a(t_list	**stack_a, int x);
void	rotate_b(t_list	**stack_b, int y);
void	rotate_a_b(t_list	**stack_a, t_list	**stack_b, int x);
void	reverse_rotate_a(t_list	**stack_a, int x);
void	reverse_rotate_b(t_list	**stack_b, int y);
void	reverse_rotate_a_b(t_list	**stack_a, t_list	**stack_b, int x);

#endif
