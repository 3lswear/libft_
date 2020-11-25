/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_bd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunderle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 15:01:46 by sunderle          #+#    #+#             */
/*   Updated: 2020/11/25 14:40:34 by sunderle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr_bd(const char *s, int c, int dir)
{
	char	*retval;
	size_t	i;

	retval = NULL;
	i = 0;
	while (i <= ft_strlen(s))
	{
		if ((unsigned char)c == s[i])
			retval = (char *)&s[i];
		if ((dir == 0) && (retval))
			return (retval);
		i++;
	}
	return (retval);
}
