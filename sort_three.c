/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanastac <tanastac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 19:14:06 by tanastac          #+#    #+#             */
/*   Updated: 2021/09/04 09:32:47 by tanastac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(int *stack_a, int len_a)
{
	if (stack_a[0] > stack_a[1] && stack_a[1] < stack_a[2]
		&& stack_a[0] < stack_a[2])
		ft_sa(stack_a, len_a);
	else if (stack_a[0] > stack_a[1] && stack_a[1] > stack_a[2])
	{
		ft_sa(stack_a, len_a);
		ft_rra(stack_a, len_a);
	}
	else if (stack_a[0] > stack_a[1] && stack_a[1] < stack_a[2]
		&& stack_a[0] > stack_a[2])
		ft_ra(stack_a, len_a);
	else if (stack_a[0] < stack_a[1] && stack_a[1] > stack_a[2]
		&& stack_a[0] < stack_a[2])
	{
		ft_sa(stack_a, len_a);
		ft_ra(stack_a, len_a);
	}
	else if (stack_a[0] < stack_a[1] && stack_a[1] > stack_a[2]
		&& stack_a[0] > stack_a[2])
		ft_rra(stack_a, len_a);
}
