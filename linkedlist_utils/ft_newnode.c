/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newnode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:43:08 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/19 10:28:23 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

t_list	*ft_newnode(int content)
{
	t_list	*newone;

	newone = malloc(sizeof(t_list));
	if (!newone)
		return (NULL);
	newone->content = content;
	newone->next = NULL;
	return (newone);
}
