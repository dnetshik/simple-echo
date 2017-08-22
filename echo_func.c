/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnetshik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 11:17:29 by dnetshik          #+#    #+#             */
/*   Updated: 2017/08/22 14:54:21 by dnetshik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "./include/minishell.h"
//#include "./libft/incl/libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		echo_func(int ac, char **av)
{
	int i;

	i = 1;
	if (ac <= 1)
		ft_putstr("\n");
	else
	{
		while (i < ac)
		{
			ft_putstr(av[i]);
			write(1," ",1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (1);
}

