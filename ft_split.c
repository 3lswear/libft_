/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunderle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 00:40:34 by sunderle          #+#    #+#             */
/*   Updated: 2020/11/24 04:10:41 by sunderle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_issep(const char *s, char sep)
{
	if (*s == sep)
		return (1);
	else
		return (0);
}

unsigned int	get_wc(const char *s, char sep)
{
	unsigned int count;

	count = 0;
	while (*s)
	{
		if (ft_issep(s, sep))
			s++;
		else
		{
			count++;
			while (*s && !ft_issep(s, sep))
				s++;
		}
	}
	return (count);
}

char			**ft_split(char const *s, char c)
{
	char			**result;
	unsigned int	wc;
	unsigned int	j;
	int				len;

	wc = get_wc(s, c);
	if (s)
	{
		result = (char **)malloc((wc + 1) * sizeof(char *));
		result[wc] = NULL;
	}
	j = 0;
	if (result)
		while (j < wc)
		{
			while (ft_issep(s, c))
				s++;
			len = ft_strchr(s, c) - s;
			if (len < 0)
				len = ft_strlen(s);
			result[j++] = ft_substr(s, 0, len);
			while (!ft_issep(s, c) && *s)
				s++;
		}
	return (result);
}
