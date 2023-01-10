/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rsh5.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matruque <matruque@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 21:50:41 by matruque          #+#    #+#             */
/*   Updated: 2022/11/20 21:50:51 by matruque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**linefy_cm(char *file_text, int *n_lines_ext)
{
	char	**matrix;
	int		n_lines;
	int		iterator;
	char	*position;

	n_lines = count_char (file_text, '\n') + 1;
	matrix = (char **) malloc (n_lines * sizeof (int));
	*matrix = file_text;
	iterator = 1;
	position = file_text;
	while (iterator < n_lines)
	{
		position = ft_strstr(position, "\n");
		*position = '\0';
		position++;
		matrix[iterator] = position;
		iterator++;
	}
	*n_lines_ext = n_lines;
	return (matrix);
}

void	ft_print_special2(char **values)
{
	ft_putstr(values[28]);
	ft_putstr(" ");
	ft_putstr(values[8]);
	ft_putstr(" ");
	ft_putstr(values[3]);
	ft_putstr(" ");
	ft_putstr(values[29]);
	ft_putstr(" ");
	ft_putstr(values[6]);
	ft_putstr(" ");
	ft_putstr(values[28]);
	ft_putstr(" ");
	ft_putstr(values[22]);
	ft_putstr(" ");
	ft_putstr(values[7]);
	ft_putstr(" ");
}

void	ft_print_special(char **values)
{
	ft_putstr(values[2]);
	ft_putstr(" ");
	ft_putstr(values[31]);
	ft_putstr(" ");
	ft_putstr(values[1]);
	ft_putstr(" ");
	ft_putstr(values[28]);
	ft_putstr(" ");
	ft_putstr(values[22]);
	ft_putstr(" ");
	ft_putstr(values[7]);
	ft_putstr(" ");
	ft_putstr(values[30]);
	ft_putstr(" ");
	ft_putstr(values[4]);
	ft_putstr(" ");
	ft_print_special2(values);
}
