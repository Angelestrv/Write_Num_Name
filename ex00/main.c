/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matruque <matruque@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 21:42:17 by matruque          #+#    #+#             */
/*   Updated: 2022/11/20 21:47:10 by matruque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_atoi(argv[1]) < 0 || ft_str_is_numeric(argv[1]) == 0)
		{
			write(1, "Error\n", 6);
			return (1);
		}
		else
		{
			ft_main_program(ft_atoi(argv[1]));
			return (0);
		}
	}
	else if (argc == 3)
	{
		return (0);
	}
	else
	{
		write(1, "Error\n", 6);
		return (1);
	}
}
