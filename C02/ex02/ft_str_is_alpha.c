/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 12:04:00 by aconti            #+#    #+#             */
/*   Updated: 2023/07/29 11:31:31 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0' )
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			i++;
		else if ((str[i] >= 'A') && (str[i] <= 'Z'))
			i++;
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
	char a[10] = "ok";
	char b[10] = "";
	char c[10] = "d42";
	int aa = ft_str_is_alpha(a);
        int bb = ft_str_is_alpha(b);
        int cc = ft_str_is_alpha(c);

	printf("risultato 1 %d, \nrisultato 2 %d, \nrisultato 3 %d", aa, bb, cc);
}*/
