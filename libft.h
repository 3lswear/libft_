/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunderle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 12:33:06 by sunderle          #+#    #+#             */
/*   Updated: 2020/11/13 03:15:58 by sunderle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

int		ft_strlen(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
void	ft_putstr_fd(char *str, int fd);
int		ft_atoi(char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
char	*ft_strchr_bd(char *s, int c, int dir);
char	*ft_strchr(char *s, int c);
char	*ft_strrchr(char *s, int c);
char	*ft_strnstr(char *haystack, char *needle, int len);
void	*ft_memset(void *s, int c, unsigned int n);
void	ft_bzero(void *s, unsigned int n);
void	*ft_memmove(void *dest, void *src, unsigned int n);
void	*ft_memcpy_bd(void *dest, void *src, unsigned int n, int dir);

#endif
