/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_input.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilipe- <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 05:53:43 by lfilipe-          #+#    #+#             */
/*   Updated: 2023/01/09 07:48:41 by lfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_signed_nbr(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		if ((*argv[i] == '-' || *argv[i] == '+')
			&& ((argv[i])[1] < '0' || (argv[i])[1] > '9'))
		{
			ft_printf ("Error\n");
			return (1);
		}
		i++;
	}
	return (0);
}

int	check_valid_input(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc <= 2)
		return (1);
	while (i < argc)
	{
		if (((*argv[i] < '0' || *argv[i] > '9')
				&& (*argv[i] != '-' && *argv[i] != '+'))
			|| ft_atol(argv[i]) > MAX_INT
			|| ft_atol(argv[i]) < MIN_INT)
		{
			ft_printf("Error\n");
			return (1);
		}
		i++;
	}
	return (check_signed_nbr(argc, argv));
}
