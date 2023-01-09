/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilipe- <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 05:49:49 by lfilipe-          #+#    #+#             */
/*   Updated: 2023/01/08 07:30:35 by lfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stack;

	if (!check_valid_input(argc, argv) && !check_duplicate(argc, argv))
	{
		get_stack(argc, argv, &stack);
		simplify_stack(&stack, argc - 1);
		if (argc <= 6)
			simple_sort(&stack);
		else
			radix_sort(&stack);
		free_stack(&stack);
	}
	return (0);
}
