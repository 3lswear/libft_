/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunderle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 15:00:27 by sunderle          #+#    #+#             */
/*   Updated: 2020/11/25 12:02:21 by sunderle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(const char *chr)
{
	if (*chr == '\n' || *chr == '\v' || *chr == '\f' ||
			*chr == '\r' || *chr == ' ' || *chr == '\t')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int is_negative;
	int result;

	result = 0;
	is_negative = 0;
	while (ft_isspace(str))
		str++;
	if (*str == '-')
	{
		is_negative = 1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	if (is_negative)
		result = -result;
	return (result);
}
