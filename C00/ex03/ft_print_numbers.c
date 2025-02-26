/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:51:17 by aconti            #+#    #+#             */
/*   Updated: 2023/07/25 17:54:34 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	start_numbers;

	start_numbers = '0';
	while (start_numbers <= '9')
	{
		write (1, &start_numbers, 1);
		start_numbers++;
	}
}
/*int	main (void)
{
	ft_print_numbers();
}*/
