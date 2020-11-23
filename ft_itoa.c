/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunderle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:25:09 by sunderle          #+#    #+#             */
/*   Updated: 2020/11/23 17:19:31 by sunderle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lg(int n)
{
	size_t result;

	result = 0;
	while ((n /= 10))
		result++;
	return (result);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*result;
	char	digit;
	int		num;

	num = n;
	len = ft_lg(num) + 1;
	if (num < 0)
		len++;
	if (!(result = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (len--)
	{
		digit = num % 10;
		digit = (num < 0) ? -digit : digit;
		result[len] = digit + '0';
		num /= 10;
	}
	if (n < 0)
		*result = '-';
	return (result);
}
