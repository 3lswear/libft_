/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunderle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 18:02:05 by sunderle          #+#    #+#             */
/*   Updated: 2020/11/13 18:05:45 by sunderle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tolower(int c)
{
	if ((ft_isalpha(c)) && (c <= 'Z'))
		return (c + ('a' - 'A'));
	return (c);
}
