/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunderle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 21:25:35 by sunderle          #+#    #+#             */
/*   Updated: 2020/11/21 23:53:31 by sunderle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*result;

	if (!nmemb)
		return (NULL);
	if (FT_SIZE_MAX / nmemb < size)
		return (NULL);
	total = nmemb * size;
	result = malloc(total);
	if (result)
		ft_bzero(result, total);
	return (result);
}
