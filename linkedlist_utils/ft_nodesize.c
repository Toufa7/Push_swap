/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodesize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:58:17 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/29 14:52:08 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

int	ft_nodesize(t_list	*list)
{
	int	idx;

	if (!list)
		return (0);
	idx = 1;
	while (list->next != NULL)
	{
		list = list->next;
		idx++;
	}
	return (idx);
}
