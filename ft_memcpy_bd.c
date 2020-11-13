/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_bd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunderle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 03:12:18 by sunderle          #+#    #+#             */
/*   Updated: 2020/11/13 03:56:06 by sunderle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy_bd(void *dest, void *src, unsigned int n, int dir)
{
	char *d;
	char *s;

	d = (char *)dest;
	s = (char *)src;

	if (!dir)
	{
		while (n)
		{
			*d++ = *s++;
			n--;
		}
	}
	else if (dir == 1)
	{
		while (n)
		{
			n--;
			d[n] = s[n];
		}
	}
	return (dest);
}
