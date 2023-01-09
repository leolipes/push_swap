/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilipe- <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 01:42:25 by lfilipe-          #+#    #+#             */
/*   Updated: 2023/01/09 05:17:08 by lfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_stack *stack)
{
	int	quant_elem;
	int	i;
	int	j;
	int	nbr;

	quant_elem = stack->a_top + 1;
	i = 0;
	while (!check_is_sorted(stack))
	{
		j = 0;
		while (j < quant_elem)
		{
			nbr = stack->a[stack->a_top];
			if ((nbr >> i) & 1)
				rotate_a(stack);
			else
				push_b(stack);
			j++;
		}
		b_to_a(stack);
		i++;
	}
}
