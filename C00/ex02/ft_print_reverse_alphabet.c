/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:36:30 by aconti            #+#    #+#             */
/*   Updated: 2023/07/25 17:52:06 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	start_alphabet;

	start_alphabet = 'z';
	while (start_alphabet >= 'a')
	{
		write (1, &start_alphabet, 1);
		--start_alphabet;
	}
}
/*int main(void)
{
	ft_print_reverse_alphabet();
}*/
