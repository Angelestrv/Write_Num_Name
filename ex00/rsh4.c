/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rsh4.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matruque <matruque@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 21:50:11 by matruque          #+#    #+#             */
/*   Updated: 2022/11/20 21:50:27 by matruque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	file_size(int fo)
{
	char	c;
	int		counter;
	int		read_control;

	counter = 0;
	read_control = 2;
	while (read_control)
	{
		read_control = read(fo, &c, 1);
		counter++;
	}
	return (counter);
}

int	read_file(int fo, char *write)
{
	char	c;
	int		counter;
	int		read_control;

	counter = 0;
	read_control = 2;
	while (read_control)
	{
		read_control = read(fo, &c, 1);
		*write = c;
		write++;
		counter++;
	}
	*write = '\0';
	return (counter);
}

int	count_char(char *text, char find)
{
	int	counter;

	counter = 0;
	while (*text != '\0')
	{
		if (*text == find)
			counter++;
		text++;
	}
	return (counter);
}
