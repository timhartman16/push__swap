/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanastac <tanastac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:17:51 by tanastac          #+#    #+#             */
/*   Updated: 2021/09/04 09:43:02 by tanastac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_index(int *stack_a, int len_a, int value)
{
	int	i;
	int	ind;

	i = 0;
	while (i < len_a)
	{
		if (stack_a[i] == value)
			ind = i;
		i++;
	}
	return (ind);
}

void	ft_sort_five(int *stack_a, int *stack_b, int len_a, int len_b)
{
	int	ind;

	ind = ft_find_index(stack_a, len_a, 0);
	if (ind <= 2)
		while (stack_a[0] != 0)
			ft_ra(stack_a, len_a);
	else
		while (stack_a[0] != 0)
			ft_rra(stack_a, len_a);
	ft_pb(stack_a, stack_b, &len_a, &len_b);
	ind = ft_find_index(stack_a, len_a, 4);
	if (ind <= 1)
		while (stack_a[0] != 4)
			ft_ra(stack_a, len_a);
	else
		while (stack_a[0] != 4)
			ft_rra(stack_a, len_a);
	ft_pb(stack_a, stack_b, &len_a, &len_b);
	ft_sort_three(stack_a, len_a);
	ft_pa(stack_a, stack_b, &len_a, &len_b);
	ft_ra(stack_a, len_a);
	ft_pa(stack_a, stack_b, &len_a, &len_b);
}
