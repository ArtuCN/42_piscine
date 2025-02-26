/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:03:14 by aconti            #+#    #+#             */
/*   Updated: 2023/07/23 16:06:35 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	start_alphabet;

	start_alphabet = 'a';
	while (start_alphabet <= 'z')
	{
		write (1, &start_alphabet, 1);
		++start_alphabet;
	}
}
/*int main(void)
{
	ft_print_alphabet();
}*/
