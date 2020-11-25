/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunderle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:03:02 by sunderle          #+#    #+#             */
/*   Updated: 2020/11/25 15:20:06 by sunderle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *result;

	if (!s)
		return (NULL);
	if (ft_strlen(&s[start]) < len)
		len = ft_strlen(&s[start]);
	else if (start >= ft_strlen(s))
		len = 0;
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result)
		ft_strlcpy(result, (char *)&s[start], len + 1);
	return (result);
}
