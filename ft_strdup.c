/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunderle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 13:57:04 by sunderle          #+#    #+#             */
/*   Updated: 2020/11/21 20:57:23 by sunderle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	char			*dest;
	unsigned int	size;

	size = ft_strlen(src) + 1;
	dest = (char *)malloc(size * sizeof(char));
	ft_strlcpy(dest, src, size);
	return (dest);
}
