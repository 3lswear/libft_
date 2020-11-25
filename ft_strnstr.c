/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunderle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 18:20:10 by sunderle          #+#    #+#             */
/*   Updated: 2020/11/26 01:48:38 by sunderle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t n_len;
	size_t i;

	n_len = ft_strlen(needle);
	if (haystack == needle || !n_len)
		return ((char *)haystack);
	i = 0;
	while (i < len)
	{
		if ((!ft_strncmp(&haystack[i], needle, n_len)) && ((i + n_len) < len))
			return (&((char *)haystack)[i]);
		else
			i++;
	}
	return (NULL);
}
