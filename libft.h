/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prototypes.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamashil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 11:10:33 by pamashil          #+#    #+#             */
/*   Updated: 2017/07/21 11:46:41 by pamashil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putnbr(int nbr);
void				ft_putstr(char const *s);
void				ft_memdel(void **ap);
void				ft_bzero(void	*s, size_t n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_strclr(char *s);
void				ft_strdel(char **as);
void				ft_striter(char *s, void (*f) (char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				*ft_memalloc(size_t size);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memmove(void *dst, const char *src, size_t len);
char				*ft_strcpy(char *dest, char const *src);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strdup(const char *src);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strnstr(const char *s1, char const *s2, size_t n2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int s2, size_t len);
char				*ft_strnew(size_t size);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_itoa(int n);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_strcmp(char const *s1, char const *s2);
int					ft_strncmp(char const *s1, char const *s2, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_atoi(const char *str);
size_t				ft_strlen(const char *str);
size_t				ft_strlcat(char *dest, char *src, size_t size);
size_t				ft_strlcatchar(char *dest, char *src, size_t size);

#endif
