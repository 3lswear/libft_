/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunderle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 15:54:33 by sunderle          #+#    #+#             */
/*   Updated: 2020/11/22 01:54:11 by sunderle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_round_dec(int n)
{
	int decimal;

	decimal = 1;
	while ((n / decimal >= 10) || (n / decimal <= -10))
		decimal *= 10;
	return (decimal);
}

void	loop(int numb, int fd)
{
	char	c;
	int		power;

	power = get_round_dec(numb);
	while (power >= 1)
	{
		c = numb / power;
		if (numb < 0)
			c = -c;
		c += '0';
		ft_putchar_fd(c, fd);
		numb = numb - (power * (numb / power));
		power = power / 10;
	}
}

void	ft_putnbr_fd(int numb, int fd)
{
	int		power;
	char	c;

	power = get_round_dec(numb);
	if (numb < 0)
		ft_putchar_fd('-', fd);
	if (get_round_dec(power) == 1)
	{
		c = numb;
		if (numb < 0)
			c = -c;
		c += '0';
		ft_putchar_fd(c, fd);
	}
	else
		loop(numb, fd);
}
