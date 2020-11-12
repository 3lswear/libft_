/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunderle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 12:33:06 by sunderle          #+#    #+#             */
/*   Updated: 2020/11/11 18:50:51 by sunderle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

# include <unistd.h>

int		ft_strlen(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
void	ft_putstr_fd(char *str, int fd);
int		ft_atoi(char *str);
int 	ft_isalpha(int c);
int		ft_isdigit(int c);
int 	ft_isalnum(int c);
int 	ft_isascii(int c);
char	*ft_strchr_bd(char *s, int c, int dir);
char	*ft_strchr(char *s, int c);
char	*ft_strrchr(char *s, int c);
char	*ft_strnstr(char *haystack, char* needle, int len);

#endif
