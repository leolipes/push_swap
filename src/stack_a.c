/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilipe- <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 03:35:25 by lfilipe-          #+#    #+#             */
/*   Updated: 2022/10/23 04:37:56 by lfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack *stack)
{
	int	tmp;

	tmp = stack->a[stack->a_top];
	stack->a[stack->a_top] = stack->a[stack->a_top - 1];
	stack->a[stack->a_top - 1] = tmp;
	ft_printf("sa\n");
}

void	push_a(t_stack *stack)
{
	if (stack->b_top == -1)
		return ;
	stack->a_top++;
	stack->a[stack->a_top] = stack->b[stack->b_top];
	stack->b_top--;
	ft_printf("pa\n");
}

void	rotate_a(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->a_top <= 0)
		return ;
	i = stack->a_top;
	tmp = stack->a[stack->a_top];
	while (i > 0)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack->a[0] = tmp;
	ft_printf("ra\n");
}

void	r_rotate_a(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->a_top <= 0)
		return ;
	i = 0;
	tmp = stack->a[0];
	while (i < stack->a_top)
	{
		stack->a[i] = stack->a[i + 1];
		i++;
	}
	stack->a[stack->a_top] = tmp;
	ft_printf("rra\n");
}
