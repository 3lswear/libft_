/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunderle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 17:43:03 by sunderle          #+#    #+#             */
/*   Updated: 2020/11/21 20:13:58 by sunderle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	result;

	i = ft_strlen(dest);
	if ((unsigned int)ft_strlen(dest) < size)
		result = i + ft_strlen(src);
	else
		result = size + ft_strlen(src);
	while ((i < size - 1) && (*src) && (size > 0))
		dest[i++] = *(src++);
	dest[i] = 0;
	return (result);
}
