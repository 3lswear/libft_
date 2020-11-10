/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_strict.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunderle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 15:00:27 by sunderle          #+#    #+#             */
/*   Updated: 2020/11/10 15:25:56 by roman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isanum(char *chr)
{
	if (*chr < '0' || *chr > '9')
		return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	int		result;

	result = 0;
	while (isanum(str))
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}
