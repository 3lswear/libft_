/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunderle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 17:17:10 by sunderle          #+#    #+#             */
/*   Updated: 2020/11/21 18:39:18 by sunderle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i;

	src_len = ft_strlen(src);
	i = 0;
	while ((i < size - 1) && (i < src_len))
	{
		dest[i] = src[i];
		i++;
	}
	if (size)
		dest[i] = '\0';
	return (src_len);
}
