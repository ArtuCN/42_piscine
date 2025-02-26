/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:32:35 by aconti            #+#    #+#             */
/*   Updated: 2023/07/25 17:59:36 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	prova(int a, int b, int c, int d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a == '9' && b == '8')
	{
	}
	else if (a <= '9')
	{
		write(1, ", ", 2);
	}
}

void	virgola(int a, int b, int c, int d)
{
	if (a != c || b != d)
	{
		if ((a * 10 + b) < (c * 10 + d))
		{
			prova(a, b, c, d);
		}
	}
}

void	blabla(int a, int b, int c, int d)
{
	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = '0';
			while (c <= '9')
			{
				d = '0';
				while (d <= '9')
				{
					virgola(a, b, c, d);
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	blabla(a, b, c, d);
}
/*int main()
{
	ft_print_comb2();
}*/
