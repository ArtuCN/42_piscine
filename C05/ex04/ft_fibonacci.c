/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:38:59 by aconti            #+#    #+#             */
/*   Updated: 2023/08/07 19:47:16 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	x;
	int	r;
	int	t;

	x = 1;
	r = 0;
	if (index == 2)
		return (1);
	else if (index < 0)
		return (-1);
	while (index != 0)
	{
		t = x;
		x = r;
		r = t + r;
		index --;
		ft_fibonacci(index);
	}
	return (r);
}
/*int main()
{
	printf("%d", ft_fibonacci(6));
}*/
