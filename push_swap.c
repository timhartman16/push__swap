/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanastac <tanastac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:34:08 by tanastac          #+#    #+#             */
/*   Updated: 2021/09/16 10:40:10 by tanastac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_full_stack_a(int *stack_a, int len_a, char **argv)
{
	int	len;

	len = 0;
	while (len < len_a)
	{
		ft_check_isint(argv[len + 1]);
		stack_a[len] = ft_atoi(argv[len + 1]);
		len++;
	}
}

int	ft_split_argv(char **mas, int *stack_a, char **argv)
{
	int	len;
	int	kol;

	kol = ft_kolvo_strok(argv[1], ' ');
	if (kol > 500)
		exit(0);
	ft_wrong_num(kol, mas, 0);
	len = 0;
	while (len < kol)
	{
		ft_check_isint(mas[len]);
		stack_a[len] = ft_atoi(mas[len]);
		len++;
	}
	ft_ochistka(mas);
	return (kol);
}

int	ft_check_valid_stack(int *stack_a, int len_a)
{
	int	i;

	i = 0;
	while (i < len_a - 1)
	{
		if (stack_a[i] > stack_a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	ft_which_sort(int *stack_a, int len_a, int *stack_b, int len_b)
{
	if (len_a == 3)
		ft_sort_three(stack_a, len_a);
	else if (len_a == 5)
		ft_sort_five(ft_refull_stack(stack_a, len_a), stack_b, len_a, len_b);
	else
		ft_radix_sort(ft_refull_stack(stack_a, len_a), len_a, stack_b, len_b);
}

int	main(int argc, char **argv)
{
	int		stack_a[500];
	int		stack_b[500];
	int		len_a;
	int		len_b;
	char	**mas;

	len_a = ft_check_len(len_a, argc);
	len_b = 0;
	if (argc == 1)
		return (0);
	if (argc == 2)
	{
		mas = ft_split(argv[1], ' ');
		len_a = ft_split_argv(mas, stack_a, argv);
	}
	else
	{
		ft_wrong_num(argc, argv, 1);
		ft_full_stack_a(stack_a, len_a, argv);
	}
	ft_check_duplicate(stack_a, len_a);
	if (ft_check_valid_stack(stack_a, len_a) == 1)
		return (0);
	ft_which_sort(stack_a, len_a, stack_b, len_b);
	return (0);
}
