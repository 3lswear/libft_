/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunderle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 13:32:27 by sunderle          #+#    #+#             */
/*   Updated: 2020/11/12 18:36:47 by sunderle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, unsigned int n)
{
	char *dest;

	if (n)
		dest = s;
	while (n > 0)
	{
		*dest++ = c;
		n--;
	}
	return (s);
}
