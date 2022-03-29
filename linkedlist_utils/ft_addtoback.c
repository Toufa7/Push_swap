/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addtoback.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:03:12 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/19 08:22:03 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

void	ft_addtoback(t_list	**stack, t_list	*newnode)
{
	t_list	*temp;

	if (!stack || !newnode)
		return ;
	temp = ft_lastlist(*stack);
	temp->next = newnode;
}
