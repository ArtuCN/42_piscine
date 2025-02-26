/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 21:43:09 by aconti            #+#    #+#             */
/*   Updated: 2023/07/26 22:10:01 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Hello world! Cplayground is an online sandbox that makes it easy to try out
// code.

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*int main()
{
    int *a;
    int *b;
    int f;
    int g;
    
    a = &f;
    b = &g;
    
    *a = 1;
    *b = 2;
    ft_swap(a, b);
    printf("valore di a: %d e valore di b %d", *a, *b);
    
}*/
