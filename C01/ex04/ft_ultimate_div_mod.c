/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 22:49:14 by aconti            #+#    #+#             */
/*   Updated: 2023/07/26 23:25:33 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	ris;
	int	res;

	ris = (*a / *b);
	res = (*a % *b);
	*a = ris;
	*b = res;
}
/*int main(void)
{
        int *a;
        int *b;
        int c;
        int d;
        
        c = 4;
        d = 2;
        a = &c;
        b = &d;
        ft_ultimate_div_mod(a, b);
        printf("risultato = %d e resto = %d", *a, *b);
}*/
