/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rsh3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matruque <matruque@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 21:49:46 by matruque          #+#    #+#             */
/*   Updated: 2022/11/20 21:49:58 by matruque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_dict_errors(void)
{
	write(1, "Dict Error\n", 11);
}

void	ft_delete_all(char *str, char *c)
{
	char	*pos;

	pos = ft_strstr(str, c);
	while (pos != 0)
	{
		ft_delete_char(pos);
		pos = ft_strstr(str, c);
	}
}

void	ft_delete_repeated(char *str, char *c)
{
	char	*pos;

	pos = str;
	while (pos != '\0')
	{
		if (*pos == c[0] && *pos == *(pos + 1))
			ft_delete_char(pos);
		else if (ft_strlen(pos) == 0)
			break ;
		else
			pos++;
	}
}

void	ft_delete_number(char *str)
{
	char	*pos;

	pos = str;
	while (pos != '\0')
	{
		if (*pos >= '0' && *pos <= '9')
			ft_delete_char(pos);
		else if (ft_strlen(pos) == 0)
			break ;
		else
			pos++;
	}
}
