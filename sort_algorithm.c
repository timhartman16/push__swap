/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanastac <tanastac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 08:28:48 by tanastac          #+#    #+#             */
/*   Updated: 2021/09/04 11:27:36 by tanastac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *stack_a, int left, int right)
{
	int	tmp;

	tmp = stack_a[left];
	stack_a[left] = stack_a[right];
	stack_a[right] = tmp;
}

void	ft_quick_sort(int *stack_a, int first, int last)
{
	int	left;
	int	right;
	int	middle;
	int	tmp;

	left = first;
	right = last;
	middle = stack_a[(left + right) / 2];
	if (first < last)
	{
		while (left <= right)
		{
			while (stack_a[left] < middle)
				left++;
			while (stack_a[right] > middle)
				right--;
			if (left <= right)
				ft_swap(stack_a, left++, right--);
		}
		ft_quick_sort(stack_a, first, right);
		ft_quick_sort(stack_a, left, last);
	}
}

void	ft_copy_mas(int *copy, int *stack_a, int len_a)
{
	int	i;

	i = 0;
	while (i < len_a)
	{
		copy[i] = stack_a[i];
		i++;
	}
}

int	*ft_refull_stack(int *stack_a, int len_a)
{
	int	copy[500];
	int	i;
	int	j;

	i = 0;
	ft_copy_mas(copy, stack_a, len_a);
	ft_quick_sort(copy, 0, len_a - 1);
	while (i < len_a)
	{
		j = 0;
		while (j < len_a)
		{
			if (stack_a[i] == copy[j])
			{
				stack_a[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
	return (stack_a);
}

void	ft_radix_sort(int *stack_a, int len_a, int *stack_b, int len_b)
{
	int	max_bit;
	int	i;
	int	j;
	int	current_number;

	i = 0;
	max_bit = 0;
	while (((len_a - 1) >> max_bit) != 0)
		max_bit++;
	while (i < max_bit)
	{
		j = len_a;
		while (j > 0)
		{
			current_number = stack_a[0];
			if (((current_number >> i) & 1) == 1)
				ft_ra(stack_a, len_a);
			else
				ft_pb(stack_a, stack_b, &len_a, &len_b);
			j--;
		}
		while (len_b)
			ft_pa(stack_a, stack_b, &len_a, &len_b);
		i++;
	}
}
