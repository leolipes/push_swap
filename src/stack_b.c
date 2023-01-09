/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilipe- <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 03:38:40 by lfilipe-          #+#    #+#             */
/*   Updated: 2022/10/23 04:38:26 by lfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_b(t_stack *stack)
{
	int	tmp;

	if (stack->b_top <= 0)
		return ;
	tmp = stack->b[stack->b_top];
	stack->b[stack->b_top] = stack->b[stack->b_top - 1];
	stack->b[stack->b_top - 1] = tmp;
	ft_printf("sb\n");
}

void	push_b(t_stack *stack)
{
	if (stack->a_top == -1)
		return ;
	stack->b_top++;
	stack->b[stack->b_top] = stack->a[stack->a_top];
	stack->a_top--;
	ft_printf("pb\n");
}

void	rotate_b(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->b_top <= 0)
		return ;
	i = stack->b_top;
	tmp = stack->b[stack->b_top];
	while (i > 0)
	{
		stack->b[i] = stack->b[i - 1];
		i--;
	}
	stack->b[0] = tmp;
	ft_printf("rb\n");
}

void	r_rotate_b(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->b_top <= 0)
		return ;
	i = 0;
	tmp = stack->b[0];
	while (i < stack->b_top)
	{
		stack->b[i] = stack->b[i + 1];
		i++;
	}
	stack->b[stack->b_top] = tmp;
	ft_printf("rrb\n");
}
