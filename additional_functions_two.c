/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   additional_functions_two.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanastac <tanastac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 09:49:53 by tanastac          #+#    #+#             */
/*   Updated: 2021/09/15 19:01:57 by tanastac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s2[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

int	ft_check_len(int len_a, int argc)
{
	len_a = argc - 1;
	if (len_a > 500)
		exit(0);
	return (len_a);
}

void	ft_error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}
