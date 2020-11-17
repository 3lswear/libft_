/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunderle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 04:38:31 by sunderle          #+#    #+#             */
/*   Updated: 2020/11/17 15:14:44 by sunderle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(void *s, int c, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i++ < n)
		if (((unsigned char *)s)[i - 1] == c)
			return (&((unsigned char *)s)[i - 1]);
	return (0);
}
