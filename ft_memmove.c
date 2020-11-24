/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunderle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 03:07:59 by sunderle          #+#    #+#             */
/*   Updated: 2020/11/24 04:31:50 by sunderle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, unsigned int n)
{
	if (dest > src)
		return (ft_memcpy_bd(dest, src, n, 1));
	else if (src > dest)
		return (ft_memcpy_bd(dest, src, n, 0));
	else
		return (dest);
}
