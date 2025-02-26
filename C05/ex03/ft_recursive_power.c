/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 18:49:57 by aconti            #+#    #+#             */
/*   Updated: 2023/08/07 18:49:59 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	r;
	int	neg;

	neg = 1;
	r = 1;
	if (power < 0)
		return (0);
	else if (nb < 0 && power % 2 != 0)
	{
		neg *= -1;
		nb *= -1;
	}
	while (power != 0)
	{
		r *= nb;
		power --;
		ft_recursive_power(r, power);
	}
	return (r * neg);
}
/*int main()
{
	printf("%d", ft_recursive_power(-3, 3));
}*/
