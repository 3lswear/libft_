/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunderle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 18:20:10 by sunderle          #+#    #+#             */
/*   Updated: 2020/11/24 04:30:08 by sunderle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, int len)
{
	int n_len;
	int i;

	n_len = ft_strlen(needle);
	i = 0;
	while (i < len)
	{
		if ((!ft_strncmp(&haystack[i], needle, n_len)) && ((i + n_len) < len))
			return (&haystack[i]);
		else
			i++;
	}
	return (0);
}
