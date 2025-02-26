/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 18:26:24 by aconti            #+#    #+#             */
/*   Updated: 2023/08/06 18:26:57 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
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
			ft_recursive_factorial(i);
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
	printf("%d", ft_recursive_factorial(0));
}*/
