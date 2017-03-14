# libft
## 42 - Project Nº1

A library of basic C functions (many of the standard library), which will be useful for the next 42 projects.

Here is a list of the functions:

| Function Name | Prototype     | Utility  |
| ------------- |---------------| --------:|
| ft_memset     | right-aligned | $1600 |
| ft_bzero      | centered      |   $12 |
| ft_memcpy     | are neat      |    $1 |
| ft_memccpy    | 
| ft_memmove    |
| ft_memchr     |
| ft_memcmp     |
| ft_strlen     |
| ft_strdup     |
| ft_strcpy     |
| ft_strcat     |
| ft_strncat    |
| ft_strlcat    |
| ft_strchr     |
| ft_strrchr    |
| ft_strstr     |
| ft_strnstr    |
| ft_strcmp     |
| ft_atoi       |
| ft_isalpha    |
| ft_isdigit    |
| ft_isalnum    |
| ft_isascii    |
| ft_isprint    |
| ft_toupper    |
| ft_tolower    |
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

