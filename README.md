# libft
## 42 - Project Nº1

A library of basic C functions (many of the standard library), which will be useful for the next 42 projects.

Here is a list of the functions:

| Function Name | Prototype     | Utility  |
| ------------- |---------------| --------|
| ft_memset     | void \*ft_memset(void \*b, int c, size_t len) | Writes 'len' bytes of 'c' to the string 'b'.
| ft_bzero      | void ft_bzero(void \*s, size_t n)    | The bzero() function writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing. |
| ft_memcpy     | void \*ft_memcpy(void \*dst, const void \*src, size_t n) | The memcpy() function copies n bytes from memory area src to memory area dst.  If dst and src overlap, behavior is undefined.  Applications in which dst and src might overlap should use memmove(3) instead. |
| ft_memccpy    | void \*ft_memccpy(void \*dst, const void \*src, int c, size_t n)
| ft_memmove    | void \*ft_memmove(void \*dst, const void \*src, size_t len)
| ft_memchr     | void \*ft_memchr(const void \*s, int c, size_t n)
| ft_memcmp     | int ft_memcmp(const void \*s1, const void \*s2, size_t n)
| ft_strlen     | size_t ft_strlen(const char \*s)
| ft_strdup     | char \*ft_strdup(const char \*s1)
| ft_strcpy     | char \*ft_strcpy(char \*dst, const char \*src)
| ft_strncpy    | char \*ft_strncpy(char \*dst, const char \*src, size_t len)
| ft_strcat     | char \*ft_strcat(char \*s1, const char \*s2)
| ft_strncat    | char \*ft_strncat(char \*s1, const char \*s2, size_t n)
| ft_strlcat    | size_t ft_strlcat(char \*dst, const char \*src, size_t size)
| ft_strchr     | char \*ft_strchr(const char \*s, int c)
| ft_strrchr    | char \*ft_strrchr(const char \*s, int c)
| ft_strstr     | char \*ft_strstr(const char \*big, const char \*little)
| ft_strnstr    | char \*ft_strnstr(const char \*big, const char \*little, size_t len)
| ft_strcmp     | int ft_strcmp(const char \*s1, const char \*s2)
| ft_strncmp    | int ft_strncmp(const char \*s1, const char \*s2, size_t n)
| ft_atoi       | int ft_atoi(const char \*str)
| ft_isalpha    | int ft_isalpha(int c)
| ft_isdigit    | int ft_isdigit(int c)
| ft_isalnum    | int ft_isalnum(int c)
| ft_isascii    | int ft_isascii(int c)
| ft_isprint    | int ft_isprint(int c)
| ft_toupper    | int ft_toupper(int c)
| ft_tolower    | int ft_tolower(int c)
| ft_memalloc   | void \*ft_memalloc(size_t size) |
| ft_memdel     | void ft_memdel(void \*\*ap)     | |
| ft_strnew     | char \*ft_strnew(size_t size)   | |
| ft_strdel     | void ft_strdel(char \*\*as)     |
| ft_strclr     | void ft_strclr(char \*s)        | |
| ft_striter    | void ft_striter(char \*s, void (\*f)(char \*)) | |
| ft_striteri   | void ft_striteri(char \*s, void (\*f)(unsigned int, char \*)) | |
| ft_strmap     | char \*ft_strmap(char const \*s, char (\*f)(char)) | |
| ft_strmapi    | char \*ft_strmapi(char const \*s, char (\*f)(unsigned int, char)) | |
| ft_strequ     | int ft_strequ(char const \*s1, char const \*s2) ||
| ft_strnequ    | int ft_strnequ(char const \*s1, char const \*s2, size_t n) ||
| ft_strsub     | char \*ft_strsub(char const \*s, unsigned int start, size_t len) | |
| ft_strjoin    | char \*ft_strjoin(char const \*s1, char const \*s2) | |
| ft_strtrim    | char \*ft_strtrim(char const \*s) | |
| ft_strsplit   | char \*\*ft_strsplit(char const \*s, char c) | |
| ft_itoa       | char \*ft_itoa(int n) | |
| ft_putchar    | void ft_putchar(char c) | | 
| ft_putstr     | void ft_putstr(char const \*s) | |
| ft_putendl    | void ft_putendl(char const \*s) | |
| ft_putnbr     | void ft_putnbr(int n) | |
| ft_putchar_fd | void ft_putchar_fd(char c, int fd) | |
| ft_putstr_fd  | void ft_putstr_fd(char const \*s, int fd) | |
| ft_putendl_fd | void ft_putendl_fd(char const \*s, int fd) | |
| ft_putnbr_fd  | void ft_putnbr_fd(int n, int fd) | |


The following functions are for list manipulation. To use them properly, you must use the following structure to represent linked lists:

```C
typedef struct  s_list
{
  void          *content;           /* Data contained in the link (of any type) */
  size_t        content_size;       /* The size of the data stored */
  struct s_list *next;              /* Next link address or NULL */
}               t_list;
```

| Function Name | Prototype     | Utility  |
| ------------- |---------------| --------:|
| ft_lstnew     | t_list \*ft_lstnew(void const \*content, size_t content_size) | $1600 |
| ft_lstdelone  | void ft_lstdelone(t_list \*\*alst, void (\*del)(void \*, size_t)) | |
| ft_lstdel     | void ft_lstdel(t_list \*\*alst, void (\*del)(void \*, size_t)) | |
| ft_lstadd     | void ft_lstadd(t_list \*\*alst, t_list \*new) | |
| ft_lstiter    | void ft_lstiter(t_list \*lst, void (\*f)(t_list \*elem)) | |
| ft_lstmap     | t_list \*ft_lstmap(t_list \*lst, t_list \*(\*f)(t_list \*elem)) | |

