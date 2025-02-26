/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:26:39 by aconti            #+#    #+#             */
/*   Updated: 2023/08/01 13:07:17 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0' )
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
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
	char a[10] = "OK";
	char b[10] = "";
	char c[10] = "42";

	int aa = ft_str_is_uppercase(a);
	int bb = ft_str_is_uppercase(b);
	int cc = ft_str_is_uppercase(c);
    printf("risultato 1 %d, \nrisultato 2 %d,\nrisultato 3 %d", aa, bb, cc);
}
*/
