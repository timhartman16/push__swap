/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanastac <tanastac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 18:33:48 by tanastac          #+#    #+#             */
/*   Updated: 2021/09/04 10:39:25 by tanastac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_hz(int i, int j, char **argv)
{
	while (argv[i][j])
	{
		if (!(ft_isdigit(argv[i][j])))
			ft_error();
		j++;
	}
}

void	ft_wrong_num(int argc, char **argv, int value)
{
	int	i;
	int	j;

	i = value;
	j = 0;
	while (i < argc)
	{
		j = 0;
		if (argv[i][j] == '-' || argv[i][j] == '+')
		{
			j += 1;
			ft_hz(i, j, argv);
		}
		else
			ft_hz(i, j, argv);
		i++;
	}
}

void	ft_check_duplicate(int *stack_a, int len_a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < len_a)
	{
		j = i + 1;
		while (j < len_a)
		{
			if (stack_a[i] == stack_a[j])
				ft_error();
			j++;
		}
		i++;
	}
}

void	ft_check_isint(char *str)
{
	long int	num;
	int			sign;

	num = 0;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str)
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	num *= sign;
	if (num < -2147483648 || num > 2147483647)
		ft_error();
}
