/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_rules.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanastac <tanastac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 14:45:28 by tanastac          #+#    #+#             */
/*   Updated: 2021/09/04 10:44:20 by tanastac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(int *stack_a, int len_a)
{
	int	tmp;

	if (len_a > 1)
	{
		tmp = stack_a[0];
		stack_a[0] = stack_a[1];
		stack_a[1] = tmp;
	}
	write(1, "sa\n", 3);
}

void	ft_sb(int *stack_b, int len_b)
{
	int	tmp;

	if (len_b > 1)
	{
		tmp = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = tmp;
	}
	write(1, "sb\n", 3);
}

void	ft_ss(int *stack_a, int *stack_b, int len_a, int len_b)
{
	int	tmp;

	if (len_a > 1)
	{
		tmp = stack_a[len_a - 1];
		stack_a[len_a - 1] = stack_a[len_a - 2];
		stack_a[len_a - 2] = tmp;
	}
	if (len_b > 1)
	{
		tmp = stack_b[len_b - 1];
		stack_b[len_b - 1] = stack_b[len_b - 2];
		stack_b[len_b - 2] = tmp;
	}
	write(1, "ss\n", 3);
}

void	ft_pa(int *stack_a, int *stack_b, int *len_a, int *len_b)
{
	int	tmp;
	int	i;

	i = 0;
	if (*len_b > 0)
	{
		tmp = stack_b[0];
		(*len_a)++;
		while (i < (*len_b) - 1)
		{
			stack_b[i] = stack_b[i + 1];
			i++;
		}
		i = 0;
		while ((*len_a) - i > 0)
		{
			stack_a[(*len_a) - i] = stack_a[(*len_a) - i - 1];
			i++;
		}
		stack_a[0] = tmp;
		(*len_b)--;
	}
	write(1, "pa\n", 3);
}

void	ft_pb(int *stack_a, int *stack_b, int *len_a, int *len_b)
{
	int	tmp;
	int	i;

	i = 0;
	if (*len_a > 0)
	{
		tmp = stack_a[0];
		(*len_b)++;
		while (i < (*len_a) - 1)
		{
			stack_a[i] = stack_a[i + 1];
			i++;
		}
		i = 0;
		while ((*len_b) - i > 0)
		{
			stack_b[(*len_b) - i] = stack_b[(*len_b) - i - 1];
			i++;
		}
		stack_b[0] = tmp;
		(*len_a)--;
	}
	write(1, "pb\n", 3);
}
