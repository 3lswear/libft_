/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_bd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunderle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 15:01:46 by sunderle          #+#    #+#             */
/*   Updated: 2020/11/11 15:33:57 by sunderle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr_bd(char *s, int c, int dir)
{
	char *retval;

	retval = 0;
	while (*s)
	{
		if (c == *s)
			retval = s;
		if ((dir == 0) && (retval))
			return (retval);
		s++;
	}
	return (retval);
}
