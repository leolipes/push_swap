/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilipe- <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 03:47:27 by lfilipe-          #+#    #+#             */
/*   Updated: 2022/10/23 04:36:20 by lfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_stack(int argc, char **argv, t_stack *stack)
{
	int	i;

	i = 0;
	argc -= 1;
	stack->a = ft_calloc(argc, sizeof(int));
	stack->b = ft_calloc(argc, sizeof(int));
	stack->index = ft_calloc(argc, sizeof(int));
	stack->a_top = argc - 1;
	stack->b_top = -1;
	if (!stack->a || !stack->b)
		return ;
	while (argc > 0)
	{
		stack->a[i] = ft_atoi(argv[argc]);
		stack->index[i] = stack->a[i];
		i++;
		argc--;
	}
}
