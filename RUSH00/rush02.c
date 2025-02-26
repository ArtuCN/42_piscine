/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:02:02 by aconti            #+#    #+#             */
/*   Updated: 2023/07/23 17:15:40 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void		w_loop(int pos_x, int pos_y, int w, int h)
{
	if (pos_y == 1 || pos_y == h )
	{
		if (pos_x == 1)
		ft_putchar('A');
		
		else if (pos_x == w )
		ft_putchar('C');
		
		else
		ft_putchar('B');
	}
	else
	{
		if (pos_x == 1 || pos_x == w)
		ft_putchar('B');
		
		else
		ft_putchar(' ');
	}
}

void		rush(int x, int y)
{
	int w;
	int h;
	int pos_x;
	int pos_y;
	w = x;
	h = y;
	pos_x = 1;
	pos_y = 1;
	while (pos_y <=  h)
	{
		while (pos_x <=  w)
		{
			w_loop(pos_y, pos_x, h, w);
			pos_x++;
		}
		pos_y++;
		pos_x = 1;
		ft_putchar( '\n');
	}
}

/*
int		main()
{
	
	rush(10, 5);
	return (0);
} */
