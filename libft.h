/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunderle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 12:33:06 by sunderle          #+#    #+#             */
/*   Updated: 2020/11/24 01:34:07 by sunderle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define FT_SIZE_MAX (18446744073709551615UL)

# include <unistd.h>
# include <stdlib.h>

int			ft_atoi(char *str);
char		*ft_itoa(int n);

size_t		ft_strlen(const char *str);
int			ft_strncmp(char *s1, char *s2, unsigned int n);
char		*ft_strchr_bd(const char *s, int c, int dir);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strnstr(char *haystack, char *needle, int len);
size_t		ft_strlcat(char *dest, const char *src, size_t size);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
char		*ft_strdup(const char *src);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		**ft_split(char const *s, char c);

void		ft_putstr_fd(char *str, int fd);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);

void		*ft_memset(void *s, int c, unsigned int n);
void		ft_bzero(void *s, unsigned int n);
void		*ft_memmove(void *dest, void *src, unsigned int n);
void		*ft_memcpy_bd(void *dest, void *src, unsigned int n, int dir);
void		*ft_memcpy(void *dest, void *src, unsigned int n);
void		*ft_memchr(void *s, int c, unsigned int n);
int			ft_memcmp(void *s1, void *s2, unsigned int n);
void		*ft_calloc(size_t nmemb, size_t size);

#endif
