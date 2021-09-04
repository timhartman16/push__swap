/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_rules_three.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanastac <tanastac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 10:42:53 by tanastac          #+#    #+#             */
/*   Updated: 2021/09/04 10:46:17 by tanastac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrr(int *stack_a, int *stack_b, int len_a, int len_b)
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
	len = len_b;
	tmp = stack_b[len - 1];
	while (len > 1)
	{
		stack_b[len - 1] = stack_b[len - 2];
		len--;
	}
	stack_b[len - 1] = tmp;
	write(1, "rrr\n", 4);
}
