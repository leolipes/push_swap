/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilipe- <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 02:10:54 by lfilipe-          #+#    #+#             */
/*   Updated: 2023/01/09 00:51:03 by lfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define MAX_INT 2147483647
# define MIN_INT -2147483648

# include <stdio.h>
# include <stdlib.h>
# include "../printf/ft_printf.h"

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	*index;
	int	a_top;
	int	b_top;
}	t_stack;

/*=== CHECKERS ===*/
int		check_valid_input(int argc, char **argv);
int		check_is_sorted(t_stack *stack);
int		check_duplicate(int argc, char **argv);
int		ft_isdigit(int c);

/*=== HANDLE STACK ===*/
void	get_stack(int argc, char **argv, t_stack *stack);
int		get_index(int nbr, t_stack *stack);
void	radix_sort(t_stack *stack);
void	simple_sort(t_stack *stack);
void	simplify_stack(t_stack *stack, int size);
void	free_stack(t_stack *stack);
int		binary_count(t_stack *stack);

/*=== OPERATIONS ===*/
void	push_a(t_stack *stack);
void	push_b(t_stack *stack);
void	swap_a(t_stack *stack);
void	swap_b(t_stack *stack);
void	rotate_a(t_stack *stack);
void	rotate_b(t_stack *stack);
void	r_rotate_a(t_stack *stack);
void	r_rotate_b(t_stack *stack);
void	b_to_a(t_stack *stack);

/*=== UTILS ====*/
int		ft_atoi(char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nitems, size_t size);
void	ft_swap(int *a, int *b);

#endif
