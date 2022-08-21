#ifndef LIBFT_H
# define LIBFT_H
#include <stddef.h>
#include <stdlib.h>
void	*ft_memset(char *ptr, int x, int n);
int	ft_atoi(const char *nptr);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(char c);
int	ft_isprint(char c);
void	*ft_memchr(const void *str, int c, int n);
void	*ft_memset(char *ptr, int x, int n);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlen(const char *s);
int	ft_strncmp(const char *s1, const char *s2, int n);
char	*ft_strrchr(const char *str, int c);
int	ft_tolower(char c);
int	ft_toupper(char c);
void	ft_bzero(void *s, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);

#endif
