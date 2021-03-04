/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:21:54 by marvin            #+#    #+#             */
/*   Updated: 2021/03/04 10:21:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

/*
** Structures
*/
typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/*
** Memory check
*/
void				*ft_memchr(const void *src, int c, size_t len);
int					ft_memcmp(const void *src, const void *cmp, size_t len);

/*
** Memory initialisation
*/
void				*ft_memset(void *src, int c, size_t len);
void				ft_bzero(void *src, size_t len);

/*
** Memory manipulation
*/
void				*ft_memcpy(void *dst, const void *src, size_t len);
void				*ft_memccpy(void *dst, const void *src, int c, size_t len);
void				*ft_memmove(void *dst, const void *src, size_t len);

/*
** Memory allocation
*/
void				*ft_calloc(size_t count, size_t size);

/*
** Char check
*/
int					ft_isalpha(int c);
int					ft_isupper(int c);
int					ft_islower(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_isspace(int c);

/*
** Char alteration
*/
int					ft_toupper(int c);
int					ft_tolower(int c);

/*
** String check
*/
size_t				ft_strlen(const char *src);
size_t				ft_word_count(const char *str, const char sep);
int					ft_strncmp(const char *src, const char *cmp, size_t len);
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *src, int c);
char				*ft_strnstr(const char *hstk, const char *ndle, size_t len);

/*
** String manipulation
*/
char				*ft_strcpy(char *dst, const char *src);
size_t				ft_strlcpy(char *dst, const char *src, size_t dst_size);
size_t				ft_strlcat(char *stem, const char *appn, size_t dst_size);

/*
** String creation
*/
char				*ft_strdup(const char *src);
char				*ft_strjoin(char const *pre, char const *post);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/*
** String parsing
*/
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *str, char const *charset);
char				**ft_split(char const *str, char sep);

/*
** List check
*/
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);

/*
** List manipulation
*/
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst_start, t_list *new_elem);
void				ft_lstadd_back(t_list **lst_start, t_list *new_elem);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*fct)(void *));
t_list				*ft_lstmap(
					t_list *lst, void *(*fct)(void *), void (*del)(void *));

/*
** Text display
*/
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *str, int fd);
void				ft_putendl_fd(char *str, int fd);
void				ft_putnbr_fd(int nb, int fd);

/*
** Mathematics
*/
size_t				ft_digit_count(long lnb);

/*
** Variable conversion
*/
int					ft_atoi(const char *str);
char				*ft_itoa(int nb);

#endif