/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 10:21:28 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/29 15:17:23 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	few_arguments(int ac, char *av[], t_list	*stack_a, t_list *stack_b)
{
	if (!av)
		exit(1);
	if (ac == 3)
	{
		sort_two(&stack_a);
		exit(0);
	}
	if (ac == 4)
	{
		sort_three(&stack_a);
		exit(0);
	}
	if (ac == 6)
	{
		sort_five(&stack_a, &stack_b);
		while (stack_b)
			push_a(&stack_a, &stack_b, 0);
		exit(0);
	}
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = ft_stackfill(argc, argv);
	stack_b = NULL;
	if (check_sorting(stack_a) == 1)
		exit(0);
	few_arguments(argc, argv, stack_a, stack_b);
	if (argc >= 90 && argc <= 110)
	{
		sort_hundred(stack_a, stack_b);
		exit(0);
	}
	if (argc >= 400 && argc <= 600)
	{
		sort_fivehundred(stack_a, stack_b);
		exit(0);
	}
	else
		sort_less_than_hundred(&stack_a, &stack_b);
	while (stack_b)
		push_a(&stack_a, &stack_b, 0);
}
