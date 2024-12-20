/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <ybenzidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:02:11 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/11/16 23:06:35 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdint.h>
# include <limits.h>
# include <fcntl.h>
# include <stdio.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
size_t	ft_strlen(const char	*str);
int		ft_atoi(const char *nb);
size_t	ft_strlcpy(char *dest, const char *src, size_t destsize);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *s1, const char *to_find, size_t n);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int n);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);

size_t	ft_strlcat(char *dst, const char *src, size_t size);
void	*ft_memset(void *ptr, int value, size_t numbyte);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *to, const void *from, size_t numBytes);
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(char *src);
void	*ft_memmove(void *dst, const void *src, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_itoa(int n);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

#endif
