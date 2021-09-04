/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_rules_two.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanastac <tanastac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 10:42:42 by tanastac          #+#    #+#             */
/*   Updated: 2021/09/04 10:46:08 by tanastac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(int *stack_a, int len_a)
{
	int	len;
	int	tmp;

	len = 0;
	tmp = stack_a[0];
	while (len < len_a - 1)
	{
		stack_a[len] = stack_a[len + 1];
		len++;
	}
	stack_a[len] = tmp;
	write(1, "ra\n", 3);
}

void	ft_rb(int *stack_b, int len_b)
{
	int	len;
	int	tmp;

	len = 0;
	tmp = stack_b[0];
	while (len < len_b - 1)
	{
		stack_b[len] = stack_b[len + 1];
		len++;
	}
	stack_b[len] = tmp;
	write(1, "rb\n", 3);
}

void	ft_rr(int *stack_a, int *stack_b, int len_a, int len_b)
{
	int	len;
	int	tmp;

	len = 0;
	tmp = stack_a[0];
	while (len < len_a - 1)
	{
		stack_a[len] = stack_a[len + 1];
		len++;
	}
	stack_a[len] = tmp;
	len = 0;
	tmp = stack_b[0];
	while (len < len_b - 1)
	{
		stack_b[len] = stack_b[len + 1];
		len++;
	}
	stack_b[len] = tmp;
	write(1, "rr\n", 3);
}

void	ft_rra(int *stack_a, int len_a)
{
	int	len;
	int	tmp;

	len = len_a;
	tmp = stack_a[len - 1];
	while (len > 1)
	{
		stack_a[len - 1] = stack_a[len - 2];
		len--;
	}
	stack_a[len - 1] = tmp;
	write(1, "rra\n", 4);
}

void	ft_rrb(int *stack_b, int len_b)
{
	int	len;
	int	tmp;

	len = len_b;
	tmp = stack_b[len - 1];
	while (len > 1)
	{
		stack_b[len - 1] = stack_b[len - 2];
		len--;
	}
	stack_b[len - 1] = tmp;
	write(1, "rrb\n", 4);
}
