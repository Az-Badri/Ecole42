/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjaclyn <wjaclyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 10:33:08 by wjaclyn           #+#    #+#             */
/*   Updated: 2020/11/23 16:34:35 by wjaclyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct				s_list
{
	void					*data;
	size_t					data_size;
	struct s_list			*next;
}							t_list;
int							ft_atoi(const char *str);
void						ft_bzero(void *str, size_t n);
void						*ft_calloc(size_t nmemb, size_t size);
int							ft_isalnum(int ch);
int							ft_isalpha(int ch);
int							ft_isascii(int ch);
int							ft_isdigit(int ch);
int							ft_isprint(int c);
void						*ft_memccpy(void *dest,
const void *src, int c, size_t n);
char						*ft_itoa(int n);
void						*ft_memchr(const void *s, int c, size_t n);
int							ft_memcmp(const void *s1, const void *s2, size_t n);
void						*ft_memcpy(void *dest, const void *src, size_t n);
void						*ft_memmove(void *src, const void *dest, size_t n);
void						*ft_memset(void *str, int c, size_t n);
void						ft_putstr_fd(char *s, int fd);
char						*ft_strchr(const char *s, int c);
char						*ft_strdup(const char *s);
size_t						ft_strlcat(char *dst, const char *src, size_t size);
size_t						ft_strlcpy(char *dst, const char *src, size_t size);
size_t						ft_strlen(const char *str);
int							ft_strncmp(const char *str1,
const char *str2, size_t n);
char						*ft_strnstr(const char *s1,
const char *s2, size_t l);
char						*ft_strrchr(const char *s, int c);
int							ft_tolower(int c);
int							ft_toupper(int c);
char						*ft_substr(char const *s, unsigned int start,
size_t len);
char						**ft_split(char const *str, char c);
void						ft_putchar_fd(char c, int fd);
void						ft_putendl_fd(char *s, int fd);
void						ft_putnbr_fd(int n, int fd);
char						*ft_strjoin(char const *s1, char const *s2);
char						*ft_strtrim(char const *s1, char const *set);
char						*ft_strmapi(char const *s,
char (*f)(unsigned int, char));
#endif
