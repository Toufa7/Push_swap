/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lastlist.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 11:29:57 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/18 11:29:58 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

t_list	*ft_lastlist(t_list	*list)
{
	if (!list)
		return (NULL);
	while (list->next != NULL)
	{
		list = list->next;
	}
	return (list);
}
