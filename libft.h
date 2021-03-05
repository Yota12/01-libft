/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuselie <jmuselie@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:20:19 by jmuselie          #+#    #+#             */
/*   Updated: 2021/03/05 14:14:22 by jmuselie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void				*ft_memchr(const void *src, int c, size_t len);
int					ft_memcmp(const void *src, const void *cmp, size_t len);
void				*ft_memset(void *src, int c, size_t len);
void				ft_bzero(void *src, size_t len);
void				*ft_memcpy(void *dst, const void *src, size_t len);
void				*ft_memccpy(void *dst, const void *src, int c, size_t len);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_calloc(size_t count, size_t size);
int					ft_isalpha(int c);
int					ft_isupper(int c);
int					ft_islower(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_isspace(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
size_t				ft_strlen(const char *src);
int					ft_strncmp(const char *src, const char *cmp, size_t len);
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *src, int c);
char				*ft_strnstr(const char *hstk, const char *ndle, size_t len);
char				*strncpy(char *dest, const char *src, size_t n);
char				*ft_strcpy(char *dst, const char *src);
size_t				ft_strlcpy(char *dst, const char *src, size_t dst_size);
size_t				ft_strlcat(char *stem, const char *appn, size_t dst_size);
char				*ft_strdup(const char *src);
char				*ft_strjoin(char const *pre, char const *post);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *str, char const *charset);
char				**ft_split(char const *str, char sep);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *str, int fd);
void				ft_putendl_fd(char *str, int fd);
void				ft_putnbr_fd(int nb, int fd);
int					ft_atoi(const char *str);
char				*ft_itoa(int nb);

#endif
