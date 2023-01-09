/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simplify_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilipe- <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 01:00:27 by lfilipe-          #+#    #+#             */
/*   Updated: 2023/01/09 05:04:57 by lfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	simplify_stack(t_stack *stack, int size)
{
	int	index1;
	int	index2;

	index1 = 0;
	while (index1 < size)
	{
		index2 = 0;
		stack->index[index1] = 0;
		while (index2 < size)
		{
			if (stack->a[index1] > stack->a[index2])
				stack->index[index1] = stack->index[index1] + 1;
			index2++;
		}
		index1++;
	}
	free(stack->a);
	stack->a = stack->index;
}
