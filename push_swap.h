/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadane <asaadane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:22:36 by asaadane          #+#    #+#             */
/*   Updated: 2023/05/21 00:37:15 by asaadane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
#define PUSHSWAP_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>
#include <stdbool.h>

typedef struct s_list
{
	int data;
	int position;
	struct s_list *next;
}t_list;

typedef struct s_stack
{
    int *A;
	int *B;
}t_stack;

typedef struct s_size
{
	int A;
	int B;
}t_size;



char	*ft_strjoin(char *s1, char *s2);
char	**ft_split(const char *s, char c);
int	ft_atoi(char *str);
bool ft_check_sorted(int *stack_a, int size_a);
void ft_small_sort(t_stack *stack, t_size *size);
void pa(t_stack *stack, t_size *size);
void pb(t_stack *stack, t_size *size);
void sa(int *stack_a, int p);
void sb(int *stack_b, int p);
void ss(int *stack_a, int *stack_b);
void ra(int *stack_a, int p);
void rb(int *stack_b, int p);
void rr(int *stack_a, int *stack_b, int top_b);
void rra(int *stack_a, int size_a, int p);
void rrb(int *stack_b, int size_a, int p);
void rrr(int *stack_a, int *stack_b, int size_a);
void small_to_top(int *stack, int size);
int ft_count_stack(int *stack);
void copy_stack(t_stack stack, int *temp, t_size size);
void small_to_top(int *stack, int size);
void ft_sort_100(t_stack *stack, t_size *size);

#endif