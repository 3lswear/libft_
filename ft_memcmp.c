/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunderle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 02:56:21 by sunderle          #+#    #+#             */
/*   Updated: 2020/11/18 03:42:42 by sunderle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(void *s1, void *s2, unsigned int n)
{
	int				retval;
	unsigned int	count;

	count = 0;
	retval = 0;
	while (count++ < n)
	{
		retval = ((unsigned char *)s1)[count - 1] - ((unsigned char *)s2)
			[count - 1];
		if (retval)
			return (retval);
	}
	return (retval);
}
