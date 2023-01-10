/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rsh6.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matruque <matruque@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 21:51:07 by matruque          #+#    #+#             */
/*   Updated: 2022/11/20 21:58:03 by matruque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print_int(int nb, int *keys, char **values);

void	unequal_case(int nb, int *keys, char **values, int counter)
{
	int	k;

	k = nb / keys[counter -1];
	if (k != 1 || (keys[counter -1] >= 100))
	{
		print_int(k, keys, values);
		ft_putstr(" ");
	}
	ft_putstr(values[counter -1]);
	k = nb % keys[counter - 1];
	if (k != 0)
	{
		ft_putstr(" ");
		print_int(k, keys, values);
	}
}

int	equal_case(int nb, int *keys, char **values, int counter)
{
	if (nb == keys[counter] && nb < 100)
	{
		ft_putstr(values[counter]);
		return (1);
	}
	else if (nb == keys[counter] && nb >= 100)
	{
		ft_putstr(values[1]);
		ft_putstr(" ");
		ft_putstr(values[counter]);
		return (1);
	}
	return (0);
}

void	print_int(int nb, int *keys, char **values)
{
	int	counter;
	int	k;

	if (nb < 0)
		return ;
	if (nb == 2147483647)
	{
		ft_print_special(values);
		return ;
	}
	k = -1;
	counter = 0;
	while (counter < 33)
	{
		if (equal_case(nb, keys, values, counter))
			break ;
		if (nb < keys[counter])
		{
			unequal_case(nb, keys, values, counter);
			break ;
		}
		counter++;
	}
}
