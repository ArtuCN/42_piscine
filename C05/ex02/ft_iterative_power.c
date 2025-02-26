/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 18:33:48 by aconti            #+#    #+#             */
/*   Updated: 2023/08/06 18:41:11 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	r;
	int	neg;

	neg = 1;
	if (power < 0)
		return (0);
	else if (nb < 0 && power % 2 != 0)
	{
		neg *= -1;
		nb *= -1;
	}
	r = 1;
	while (power != 0)
	{
		r *= nb;
		power --;
	}
	return (r * neg);
}
/*int main()
{
	printf("%d", ft_iterative_power(-3, 3));
}*/
