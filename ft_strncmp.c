/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunderle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 15:54:55 by sunderle          #+#    #+#             */
/*   Updated: 2020/08/25 14:10:18 by sunderle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	char			*string1;
	char			*string2;
	unsigned int	count;
	int				retval;

	string1 = s1;
	string2 = s2;
	count = n;
	retval = 0;
	while (count > 0)
	{
		if (*string1 != '\0' || *string2 != '\0')
		{
			retval = *string1 - *string2;
			if (retval)
				return (retval);
		}
		else
			break ;
		string1++;
		string2++;
		count--;
	}
	return (retval);
}
