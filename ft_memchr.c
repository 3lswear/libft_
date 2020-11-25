/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunderle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 04:38:31 by sunderle          #+#    #+#             */
/*   Updated: 2020/11/25 14:23:11 by sunderle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i++ < n)
		if (((unsigned char *)s)[i - 1] == (unsigned char)c)
			return (&((unsigned char *)s)[i - 1]);
	return (NULL);
}
