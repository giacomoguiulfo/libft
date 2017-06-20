NAME		:= libft.a

CC			:=	gcc
CFLAGS		+= -Wall -Wextra -Werror
CFLAGS		+= -I includes

ARR			:=	ft_arr_remove_nth
CHR			:=	ft_putnchar_fd ft_putchar_fd ft_putchar ft_getchar
DNARR		:=	dnarr_init dnarr_kill dnarr_man
FT_CTYPE	:=	ft_isalnum ft_isalpha ft_isascii	\
				ft_isdigit ft_isprint ft_isspace	\
				ft_islower ft_isupper ft_tolower ft_toupper
FT_MATH		:=	ft_isinf ft_isnan ft_pow ft_sqrtf
FT_PRINTF_H :=	ft_pf_chr_conv ft_pf_float_conv ft_pf_fmt_parse \
				ft_pf_handle_spec ft_pf_num_conv ft_pf_bonus ft_pf_handlers \
				ft_pf_str_conv ft_pf_wstr_conv ft_pf_xou_conv
FT_PRINTF	:=	ft_printf ft_printf_more
FT_SORT 	:=	ft_qsort
FT_STDLIB	:=	ft_atoi ft_realloc
FT_STRING	:=	ft_bzero ft_memccpy ft_memchr ft_memcmp ft_memcpy		\
				ft_memmove ft_memset ft_strcat ft_strchr ft_strcmp		\
				ft_strcpy ft_strdup ft_strlcat ft_strlen ft_strncat		\
				ft_strncmp ft_strncpy ft_strndup ft_strnstr ft_strrchr	\
				ft_strstr
FT_TERM		:=	ft_clrscreen ft_cursor_goto ft_get_win_size ft_highlight \
				ft_termcmd ft_underline
FT_VECTOR	:=	ft_cvector
GNL			:=	get_next_line
LST			:=	ft_lstadd ft_lstdelnode ft_lstdel ft_lstdelone ft_lstiter	\
				ft_lstmap ft_lstnew ft_printlst
MEM			:=	ft_free_rows ft_memalloc ft_memdel ft_recalloc ft_swap
NBR			:=	ft_atoi_base ft_imaxtoa ft_is_sort ft_itoa_base ft_itoa \
				ft_nblen ft_putnbr_fd ft_putnbr ft_range ft_uimaxtoa_base
STR			:=	ft_countwords ft_findchr ft_free_map ft_insrt_to_str 		\
				ft_putendl_fd ft_putendl ft_putstr_fd ft_putstr ft_strclr	\
				ft_strdel ft_strequ ft_striter ft_striteri ft_strjoin		\
				ft_strmap ft_strmapi ft_strnequ ft_strnew ft_strrev			\
				ft_strsplit ft_strsub ft_strtrim

FILES		:=	$(addprefix arr/, $(ARR))				\
				$(addprefix chr/, $(CHR))				\
				$(addprefix dnarr/, $(DNARR))			\
				$(addprefix ft_ctype/, $(FT_CTYPE))		\
				$(addprefix ft_math/, $(FT_MATH))		\
				$(addprefix ft_printf/, $(FT_PRINTF_H))	\
				$(addprefix ft_printf/, $(FT_PRINTF))	\
				$(addprefix sort/, $(FT_SORT))			\
				$(addprefix ft_stdlib/, $(FT_STDLIB))	\
				$(addprefix ft_string/, $(FT_STRING))	\
				$(addprefix ft_term/, $(FT_TERM))		\
				$(addprefix vector/, $(FT_VECTOR))		\
				$(addprefix gnl/, $(GNL))				\
				$(addprefix lst/, $(LST))				\
				$(addprefix mem/, $(MEM))				\
				$(addprefix nbr/, $(NBR))				\
				$(addprefix str/, $(STR))				\

OBJDIR	:= obj/
SRCDIR	:= src/

SRC			:=	$(addprefix $(SRCDIR)/, $(addsuffix .c, $(FILES)))
OBJ			:=	$(patsubst $(SRCDIR)/%, $(OBJDIR)/%, $(SRC:.c=.o))

MAX			:=	$(words $(OBJ))
n			:=	x
increment	=	$1 x
COUNTER		=	$(words $n)$(eval n := $(call increment,$n))

.PHONY = all obj clean fclean re

all: obj $(NAME)

obj:
	@mkdir -p $(OBJDIR)

$(NAME): $(OBJ)
	@printf "\r\e[32mCompiling...(%d/%d)[DONE]\n\e[0m" $(MAX) $(MAX)
	@printf "\e[32mLinking and indexing...\e[0m"
	@ar rcs $(NAME) $(OBJ)
	@printf "\e[32m[DONE]\e[0m\n"
	@printf "\e[32mCompiled library: libft\e[0m\n"

$(OBJDIR)%.o: $(SRCDIR)%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -o $@ -c $<
	@printf "\r\e[32mCompiling...(%d/%d)\e[0m" $(COUNTER) $(MAX)

clean:
	@rm -rf $(OBJDIR)
	@printf "\e[32mRemoved object files\e[0m\n"

fclean: clean
	@rm -f $(NAME)
	@printf "\e[32mRemoved library: libft\e[0m\n"

re: fclean all
