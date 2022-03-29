/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freelist.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:03:29 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/20 15:26:15 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

void	ft_freelist(t_list **stack)
{
	t_list	*keep;

	while (*stack)
	{
		keep = *stack;
		*stack = keep->next;
		free(keep);
	}
	*stack = NULL;
}
