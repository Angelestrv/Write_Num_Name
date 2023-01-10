/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rsh7.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matruque <matruque@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 21:58:23 by matruque          #+#    #+#             */
/*   Updated: 2022/11/20 22:03:21 by matruque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*preprocess_dict_cm(char *filepath)
{
	int		fo;
	int		buff;
	char	*file_text;

	fo = open(filepath, O_RDWR);
	if (fo == -1)
		return (0);
	buff = file_size(fo);
	close(fo);
	file_text = (char *) malloc(buff + 1);
	fo = open(filepath, O_RDWR);
	if (fo == -1)
		return (0);
	read_file(fo, file_text);
	ft_delete_all(file_text, " ");
	ft_delete_all(file_text, ":");
	ft_delete_repeated(file_text, "\n");
	if (file_text[ft_strlen(file_text)-1] == '\n')
		ft_delete_char(file_text + ft_strlen(file_text) - 1);
	return (file_text);
}

void	fill_keys_default(int *keys, char **values, int n_lines)
{
	int	counter;

	counter = 0;
	while (counter < n_lines)
	{
		keys[counter] = ft_atoi(values[counter]);
		ft_delete_number(values[counter]);
		ft_delete_all(values[counter], ":");
		counter++;
	}
	keys[counter] = 2147483647;
}

int	evaluator_function(char c)
{
	if (((c >= '0') && (c <= '9')))
		return (1);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!evaluator_function(*str))
			return (0);
		str++;
	}
	return (1);
}

void	ft_main_program(int k)
{
	int		keys[32];
	char	**values;
	char	*file_text;
	int		n_lines;

	file_text = preprocess_dict_cm("numbers.dict");
	values = linefy_cm(file_text, &n_lines);
	fill_keys_default(keys, values, n_lines);
	print_int(k, keys, values);
	free(file_text);
	free(values);
}
