/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:15:57 by aconti            #+#    #+#             */
/*   Updated: 2023/07/23 17:18:44 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


