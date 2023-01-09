/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilipe- <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 00:02:07 by lfilipe-          #+#    #+#             */
/*   Updated: 2022/10/23 04:34:45 by lfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_duplicate(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc - 1;
	j = i;
	while (i > 0)
	{
		while (j > 0)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]) && i != j)
			{
				ft_printf("Error\n");
				return (1);
			}
			j--;
		}
		j = argc - 1;
		i--;
	}
	return (0);
}
