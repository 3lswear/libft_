/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunderle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:50:07 by sunderle          #+#    #+#             */
/*   Updated: 2020/11/23 13:06:25 by sunderle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*result;

	len = ft_strlen(s1) + ft_strlen(s2);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result)
	{
		ft_strlcpy(result, (char *)s1, ft_strlen(s1) + 1);
		ft_strlcat(result, (char *)s2, len + 1);
	}
	return (result);
}
