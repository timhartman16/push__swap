/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanastac <tanastac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:34:55 by tanastac          #+#    #+#             */
/*   Updated: 2021/09/15 19:01:53 by tanastac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
void	ft_sa(int *stack_a, int kol_elem);
void	ft_sb(int *stack_b, int len_b);
void	ft_ss(int *stack_a, int *stack_b, int len_a, int len_b);
void	ft_pa(int *stack_a, int *stack_b, int *len_a, int *len_b);
void	ft_pb(int *stack_a, int *stack_b, int *len_a, int *len_b);
void	ft_ra(int *stack_a, int len_a);
void	ft_rb(int *stack_b, int len_b);
void	ft_rr(int *stack_a, int *stack_b, int len_a, int len_b);
void	ft_rra(int *stack_a, int len_a);
void	ft_rrb(int *stack_b, int len_b);
void	ft_rrr(int *stack_a, int *stack_b, int len_a, int len_b);
void	ft_sort_three(int *stack_a, int len_a);
char	**ft_split(char const *s, char c);
int		ft_kolvo_strok(char const *s, char c);
char	*ft_strchr(const char *s, int c);
void	ft_sort_five(int *stack_a, int *stack_b, int len_a, int len_b);
void	ft_radix_sort(int *stack_a, int len_a, int *stack_b, int len_b);
void	ft_quick_sort(int *stack_a, int first, int last);
int		*ft_refull_stack(int *stack_a, int len_a);
void	ft_print_stack(int *stack_a, int len_a);
void	ft_wrong_num(int argc, char **argv, int value);
void	ft_check_duplicate(int *stack_a, int len_a);
void	ft_check_isint(char *str);
int		ft_isdigit(char c);
int		ft_strcmp(char *s1, char *s2);
void	ft_error(void);
char	**ft_ochistka(char **str);
int		ft_check_len(int len_a, int argc);

#endif