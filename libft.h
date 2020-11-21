/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunderle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 12:33:06 by sunderle          #+#    #+#             */
/*   Updated: 2020/11/21 23:42:32 by sunderle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define FT_SIZE_MAX (18446744073709551615UL)

# include <unistd.h>
# include <stdlib.h>

int				ft_atoi(char *str);

int				ft_strlen(char *str);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
void			ft_putstr_fd(char *str, int fd);
char			*ft_strchr_bd(char *s, int c, int dir);
char			*ft_strchr(char *s, int c);
char			*ft_strrchr(char *s, int c);
char			*ft_strnstr(char *haystack, char *needle, int len);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
char			*ft_strdup(char *src);

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);

void			*ft_memset(void *s, int c, unsigned int n);
void			ft_bzero(void *s, unsigned int n);
void			*ft_memmove(void *dest, void *src, unsigned int n);
void			*ft_memcpy_bd(void *dest, void *src, unsigned int n, int dir);
void			*ft_memcpy(void *dest, void *src, unsigned int n);
void			*ft_memchr(void *s, int c, unsigned int n);
int				ft_memcmp(void *s1, void *s2, unsigned int n);
void			*ft_calloc(size_t nmemb, size_t size);

#endif
