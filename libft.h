/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungyel <lsy2246@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 20:40:27 by seungyel          #+#    #+#             */
/*   Updated: 2020/11/17 16:21:16 by seungyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

void	*ft_memset(void *ptr, int vlaue, size_t num);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, void *src, size_t n);
void	*ft_memchr(const void *ptr, int value, size_t n);
void	*ft_calloc(size_t count, size_t size);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strchr(char *str, int c);
char	*ft_strrchr(char *str, int c);
char	*ft_strdup(char *s);
char	*ft_strnstr(char *big, char *little, size_t len);
int		ft_strncmp(const char *str1, const char *str2, size_t num);
int		ft_atoi(const char *str);
int		ft_memcmp(void *ptr1, void *ptr2, size_t num);
int		ft_isprint(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
#endif
