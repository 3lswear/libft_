/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunderle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:03:02 by sunderle          #+#    #+#             */
/*   Updated: 2020/11/23 12:44:43 by sunderle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *result;

	if (start >= ft_strlen((char *)s))
		return (NULL);
	if (ft_strlen((char *)&s[start]) < len)
		len = ft_strlen((char *)&s[start]);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result)
		ft_strlcpy(result, (char *)&s[start], len + 1);
	return (result);
}
