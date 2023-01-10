/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rsh1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matruque <matruque@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 21:47:51 by matruque          #+#    #+#             */
/*   Updated: 2022/11/20 21:48:22 by matruque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putstr(char *str)
{
	char	*original;
	int		counter;

	original = str;
	counter = 1;
	while (*str != '\0')
	{
		str++;
		counter++;
	}
	write(1, original, counter - 1);
}

int	check_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\v')
		return (1);
	if (c == '\n' || c == '\f' || c == '\r')
		return (1);
	if (c == '-')
		return (2);
	if (c == '+')
		return (3);
	return (0);
}

int	ft_atoi(char *str)
{
	int	cumulative_sign;
	int	cumulative_sum;

	cumulative_sign = 0;
	cumulative_sum = 0;
	while (check_space(*str) == 1)
		str++;
	while (check_space(*str) == 2 || check_space(*str) == 3)
	{
		if (check_space(*str) == 2)
			cumulative_sign++;
		str ++;
	}
	while (*str >= '0' && *str <= '9')
	{
		cumulative_sum = 10 * cumulative_sum + *str - '0';
		str++;
	}
	if (cumulative_sign % 2 == 1)
		cumulative_sum = -cumulative_sum;
	return (cumulative_sum);
}

int	ft_strlen(char *str)
{
	int		counter;

	counter = 0;
	while (*str != '\0')
	{
		str++;
		counter++;
	}
	return (counter);
}

char	*ft_strstr(char *s1, char *s2)
{
	char	*s1_aux;
	char	*s2_aux;

	if (ft_strlen(s2) == 0)
		return (s1);
	while (*s1 != '\0')
	{
		if (*s1 == *s2)
		{
			s1_aux = s1;
			s2_aux = s2;
			while (*s1_aux == *s2_aux)
			{
				s1_aux++;
				s2_aux++;
				if (*s2_aux == '\0')
					return (s1);
				if (*s1_aux == '\0')
					return (0);
			}
		}
		s1++;
	}
	return (0);
}
