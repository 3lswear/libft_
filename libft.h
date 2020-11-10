/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunderle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 12:33:06 by sunderle          #+#    #+#             */
/*   Updated: 2020/11/10 17:38:41 by roman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

# include <unistd.h>

int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_putstr_fd(char *str, int fd);
int		ft_atoi(char *str);
int 	ft_isalpha(int c);
int		ft_isdigit(int c);
int 	ft_isalnum(int c);
int 	ft_isascii(int c);

#endif
