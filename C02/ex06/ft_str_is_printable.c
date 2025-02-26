/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:10:01 by aconti            #+#    #+#             */
/*   Updated: 2023/08/01 13:33:44 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0' )
	{
		if ((str[i] >= 32) && (str[i] <= 126))
		{
			i++;
		}
		else
		{
			break ;
		}
	}
	if (str[i] == '\0')
		return (1);
	else 
		return (0);
}
/*
int main()
{
	char a[10] = " ";
	char b[10] = "";
	char c[10] = "42";


	int aa = ft_str_is_printable(a);
	int bb = ft_str_is_printable(b);
	int cc = ft_str_is_printable(c);
    printf("risultato 1 %d, \nrisultato 2 %d,\nrisultato 3 %d", aa, bb, cc);
}*/
