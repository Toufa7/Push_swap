/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 13:57:41 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/29 15:08:11 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	leave(char *str)
{
	ft_printf(str);
	exit(1);
}

void	actions(t_list **stack_a, t_list **stack_b, const char *str)
{
	if (ft_strcmp("sa\n", str) == 0)
		swap_a(stack_a, 1);
	else if (ft_strcmp("sb\n", str) == 0)
		swap_b(stack_b, 1);
	else if (ft_strcmp("ss\n", str) == 0)
		swap_a_b(stack_a, stack_b, 1);
	else if (ft_strcmp("pa\n", str) == 0)
		push_a(stack_a, stack_b, 1);
	else if (ft_strcmp("pb\n", str) == 0)
		push_b(stack_a, stack_b, 1);
	else if (ft_strcmp("ra\n", str) == 0)
		rotate_a(stack_a, 1);
	else if (ft_strcmp("rb\n", str) == 0)
		rotate_b(stack_b, 1);
	else if (ft_strcmp("rr\n", str) == 0)
		rotate_a_b(stack_a, stack_b, 1);
	else if (ft_strcmp("rra\n", str) == 0)
		reverse_rotate_a(stack_a, 1);
	else if (ft_strcmp("rrb\n", str) == 0)
		reverse_rotate_b(stack_b, 1);
	else if (ft_strcmp("rrr\n", str) == 0)
		reverse_rotate_a_b(stack_a, stack_b, 1);
	else
		leave("Error\n");
}

int	main(int argc, char **argv)
{
	char	*input;
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = ft_stackfill(argc, argv);
	stack_b = NULL;
	if (!argv)
		exit(1);
	input = get_next_line(0);
	while (input)
	{
		actions(&stack_a, &stack_b, input);
		input = get_next_line(0);
	}
	if (check_sorting(stack_a) == 1 && stack_b == NULL)
	{
		ft_printf("%sOK\n", GREEN);
		exit (0);
	}
	else
		ft_printf("%sKO\n", RED);
	exit(1);
}
