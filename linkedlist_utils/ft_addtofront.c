/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addtofront.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:35:19 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/19 08:21:33 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

void	ft_addtofront(t_list **stack, t_list *newnode)
{
	if (!(stack || newnode))
		return ;
	newnode->next = *stack;
	*stack = newnode;
}
