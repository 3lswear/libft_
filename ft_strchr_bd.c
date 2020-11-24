/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_bd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunderle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 15:01:46 by sunderle          #+#    #+#             */
/*   Updated: 2020/11/24 02:03:37 by sunderle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr_bd(const char *s, int c, int dir)
{
	char *retval;

	retval = 0;
	while (*s)
	{
		if (c == *s)
			retval = (char *)s;
		if ((dir == 0) && (retval))
			return (retval);
		s++;
	}
	return (retval);
}
