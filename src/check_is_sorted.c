/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_is_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilipe- <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 03:26:13 by lfilipe-          #+#    #+#             */
/*   Updated: 2023/01/08 10:37:00 by lfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_is_sorted(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->a_top)
	{
		if (stack->a[i] < stack->a[i + 1])
			return (0);
		i++;
	}
	return (1);
}
