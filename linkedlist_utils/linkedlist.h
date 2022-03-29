/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkedlist.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:37:34 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/21 22:05:03 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKEDLIST_H
# define LINKEDLIST_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "../ft_printf.h"

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}	t_list;

int			ft_strcmp(const char *s1, const char *s2);
long long	ft_atoi(const char *str);
size_t		ft_strlen(const char *s);
int			ft_nodesize(t_list	*list);
void		ft_display(t_list	*node);
void		ft_addtofront(t_list **stack, t_list *newnode);
void		ft_addtoback(t_list	**stack, t_list	*newnode);
t_list		*ft_stackfill(int nbr, char *arg[]);
t_list		*ft_newnode(int content);
t_list		*ft_lastlist(t_list	*list);
void		check_doubles(int ac, char *av[]);
void		ft_freelist(t_list **stack);

#endif
