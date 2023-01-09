/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilipe- <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 00:56:17 by lfilipe-          #+#    #+#             */
/*   Updated: 2023/01/08 10:35:13 by lfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack *stack)
{
	if (stack->a || stack->b || stack->index)
	{
		free(stack->a);
		free(stack->b);
		stack->a = NULL;
		stack->b = NULL;
		stack->index = NULL;
	}
}
