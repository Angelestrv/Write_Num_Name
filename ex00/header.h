/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matruque <matruque@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 22:16:37 by matruque          #+#    #+#             */
/*   Updated: 2022/11/20 22:33:09 by matruque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include "unistd.h"
# include "stdio.h"
# include "stdlib.h"
# include "fcntl.h"

void	ft_putstr(char *str);
int		check_space(char c);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
char	*ft_strstr(char *s1, char *s2);
void	ft_delete_char(char *str);
void	ft_dict_errors(void);
void	ft_delete_all(char *str, char *c);
void	ft_delete_repeated(char *str, char *c);
void	ft_delete_number(char *str);
int		file_size(int fo);
int		read_file(int fo, char *write);
int		count_char(char *text, char find);
int		file_size(int fo);
int		read_file(int fo, char *write);
int		count_char(char *text, char find);
char	**linefy_cm(char *file_text, int *n_lines_ext);
void	ft_print_special2(char **values);
void	ft_print_special(char **values);
void	unequal_case(int nb, int *keys, char **values, int counter);
int		equal_case(int nb, int *keys, char **values, int counter);
void	print_int(int nb, int *keys, char **values);
char	*preprocess_dict_cm(char *filepath);
void	fill_keys_default(int *keys, char **values, int n_lines);
int		evaluator_function(char c);
int		ft_str_is_numeric(char *str);
void	ft_main_program(int k);

#endif
