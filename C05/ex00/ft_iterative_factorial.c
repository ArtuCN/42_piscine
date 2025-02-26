/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 17:34:10 by aconti            #+#    #+#             */
/*   Updated: 2023/08/06 17:46:35 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	r;

	r = 1;
	i = nb;
	if (nb > 0)
	{
		while (i != 0)
		{
			r *= i;
			i--;
		}
		return (r);
	}
	else if (nb == 0)
		return (1);
	else
		return (0);
}
/*int main()
{
	printf("%d", ft_iterative_factorial(4));
}*/
