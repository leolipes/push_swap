/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilipe- <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 01:55:35 by lfilipe-          #+#    #+#             */
/*   Updated: 2023/01/08 10:02:10 by lfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_smallest(int nbr, t_stack *stack)
{
	int	i;

	i = stack->a_top;
	while (i >= 0)
	{
		if (stack->a[i] < nbr)
			return (0);
		i--;
	}
	return (1);
}

void	sort_5nbr(t_stack *stack)
{
	while (stack->a_top > 2 && !check_is_sorted(stack))
	{
		if (is_smallest(stack->a[stack->a_top], stack))
			push_b (stack);
		else
			rotate_a(stack);
	}
}

void	sort_3nbr(t_stack *stack)
{
	while (!check_is_sorted(stack))
	{
		if (stack->a[stack->a_top] > stack->a[0])
			rotate_a(stack);
		else
			swap_a(stack);
	}
}

void	simple_sort(t_stack *stack)
{
	sort_5nbr(stack);
	sort_3nbr(stack);
	if (stack->b_top == 1 && stack->b[stack->b_top] < stack->b[0])
		swap_b(stack);
	b_to_a(stack);
}
