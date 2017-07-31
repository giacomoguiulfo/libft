# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gguiulfo <gguiulfo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/20 11:36:52 by gguiulfo          #+#    #+#              #
#    Updated: 2017/07/31 16:26:48 by gguiulfo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library Name
NAME		:= libft.a

# Compiler Information
CC			:=	gcc
CFLAGS		+= -Wall -Wextra -Werror -O3
CFLAGS		+= -I includes

# Folders
INCDIR		:= includes/
OBJDIR		:= obj/
SRCDIR		:= src/

# Library Content
ARR :=						\
	ft_arr_remove_nth
CHR :=						\
	ft_putnchar_fd 			\
	ft_putchar_fd 			\
	ft_putchar 				\
	ft_getchar
DNARR :=					\
	dnarr_init 				\
	dnarr_kill 				\
	dnarr_man
FT_CTYPE 		:=			\
	ft_isalnum 				\
	ft_isalpha 				\
	ft_isascii 				\
	ft_isdigit 				\
	ft_isprint 				\
	ft_isspace 				\
	ft_islower 				\
	ft_isupper 				\
	ft_tolower 				\
	ft_toupper
FT_HEAP :=					\
	fts_get_heap 			\
	fts_heap_free 			\
	fts_free 				\
	fts_malloc 				\
	fts_memalloc 			\
	fts_realloc
FT_MATH :=					\
	ft_isinf 				\
	ft_isnan 				\
	ft_pow 					\
	ft_sqrtf
FT_PRINTF_H := 				\
	ft_pf_chr_conv 			\
	ft_pf_float_conv 		\
	ft_pf_fmt_parse 		\
	ft_pf_handle_spec	 	\
	ft_pf_num_conv 			\
	ft_pf_bonus 			\
	ft_pf_handlers 			\
	ft_pf_str_conv 			\
	ft_pf_wstr_conv 		\
	ft_pf_xou_conv
FT_PRINTF :=				\
	ft_printf 				\
	ft_printf_more
FT_SORT :=					\
	ft_qsort
FT_STDLIB :=				\
	ft_atoi 				\
	ft_realloc
FT_STRING :=				\
	ft_bzero 				\
	ft_memccpy 				\
	ft_memchr 				\
	ft_memcmp 				\
	ft_memcpy 				\
	ft_memmove 				\
	ft_memset 				\
	ft_strcat 				\
	ft_strchr 				\
	ft_strcmp 				\
	ft_strcpy 				\
	ft_strdup 				\
	ft_strlcat 				\
	ft_strlen 				\
	ft_strncat 				\
	ft_strncmp 				\
	ft_strncpy 				\
	ft_strndup 				\
	ft_strnstr 				\
	ft_strrchr 				\
	ft_strstr
FT_TERM :=					\
	ft_clrscreen 			\
	ft_cursor_goto 			\
	ft_get_win_size 		\
	ft_highlight 			\
	ft_termcmd 				\
	ft_underline
FT_VECTOR :=				\
	ft_cvector
GNL :=						\
	get_next_line
LST	:=						\
	ft_lstadd 				\
	ft_lstdelnode 			\
	ft_lstdel 				\
	ft_lstdelone 			\
	ft_lstfind 				\
	ft_lstiter 				\
	ft_lstmap 				\
	ft_lstnew 				\
	ft_printlst
MEM :=						\
	ft_free_rows 			\
	ft_memalloc 			\
	ft_memdel 				\
	ft_recalloc 			\
	ft_swap
NBR :=						\
	ft_atoi_base 			\
	ft_imaxtoa 				\
	ft_is_sort 				\
	ft_itoa_base 			\
	ft_itoa 				\
	ft_nblen 				\
	ft_putnbr_fd 			\
	ft_putnbr 				\
	ft_range 				\
	ft_uimaxtoa_base
STR :=						\
	ft_countwords 			\
	ft_findchr 				\
	ft_free_map 			\
	ft_insrt_to_str 		\
	ft_putendl_fd 			\
	ft_putendl 				\
	ft_putstr_fd 			\
	ft_putstr 				\
	ft_strclr				\
	ft_strdel 				\
	ft_strequ 				\
	ft_striter 				\
	ft_striteri 			\
	ft_strjoin 				\
	ft_strmap 				\
	ft_strmapi 				\
	ft_strnequ 				\
	ft_strnew 				\
	ft_strrev 				\
	ft_strsplit 			\
	ft_strsub 				\
	ft_strtrim

FILES	:=														\
			$(addprefix arr/, $(ARR))							\
			$(addprefix chr/, $(CHR))							\
			$(addprefix dnarr/, $(DNARR))						\
			$(addprefix ft_ctype/, $(FT_CTYPE))					\
			$(addprefix ft_heap/, $(FT_HEAP))					\
			$(addprefix ft_math/, $(FT_MATH))					\
			$(addprefix ft_printf/, $(FT_PRINTF_H))				\
			$(addprefix ft_printf/, $(FT_PRINTF))				\
			$(addprefix sort/, $(FT_SORT))						\
			$(addprefix ft_stdlib/, $(FT_STDLIB))				\
			$(addprefix ft_string/, $(FT_STRING))				\
			$(addprefix ft_term/, $(FT_TERM))					\
			$(addprefix vector/, $(FT_VECTOR))					\
			$(addprefix gnl/, $(GNL))							\
			$(addprefix lst/, $(LST))							\
			$(addprefix mem/, $(MEM))							\
			$(addprefix nbr/, $(NBR))							\
			$(addprefix str/, $(STR))							\

# File Assignation
SRC			:=	$(addprefix $(SRCDIR)/, $(addsuffix .c, $(FILES)))
OBJ			:=	$(patsubst $(SRCDIR)/%, $(OBJDIR)/%, $(SRC:.c=.o))
HEADERS		:=  $(wildcard $(INCDIR)/*.h)

# Output Dependencies
NB			= $(words $(FILES))
INDEX		= 0
LEN_NAME	= `printf "%s" $(NAME) | wc -c`
DELTA		= $$(echo "$$(tput cols)-31-$(LEN_NAME)" | bc)
SHELL		= /bin/bash

.PHONY = all format clean fclean re
# Rules
all:
	@$(MAKE) -j $(NAME)

$(NAME): $(OBJDIR) $(OBJ) $(HEADERS) Makefile
	@ar rcs $(NAME) $(OBJ)
	@printf "\r\033[38;5;340m✓ Compiled $(NAME)\033[0m\033[K\n";

$(OBJDIR):
	@mkdir -p $(OBJDIR)
	@mkdir -p $(dir $(OBJ))

$(OBJDIR)%.o:$(SRCDIR)%.c Makefile | $(OBJDIR)
	@$(eval DONE=$(shell echo $$(($(INDEX)*20/$(NB)))))
	@$(eval PERCENT=$(shell echo $$(($(INDEX)*100/$(NB)))))
	@$(eval TO_DO=$(shell echo $$((20-$(INDEX)*20/$(NB) - 1))))
	@$(eval COLOR=$(shell list=(160 196 202 208 215 221 226 227 190 154 118 82 46); index=$$(($(PERCENT) * $${#list[@]} / 100)); echo "$${list[$$index]}"))
	@printf "\r\033[38;5;%dm⌛[%s]:%2d%% `printf '█%.0s' {0..$(DONE)}`%*s❙ %*.*s\033[0m\033[K" $(COLOR) $(NAME) $(PERCENT) $(TO_DO) "" $(DELTA) $(DELTA) "$(shell echo "$@" | sed 's/^.*\///')"
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(INCDIR)
	@$(eval INDEX=$(shell echo $$(($(INDEX)+1))))

format: $(SRC) $(HEADERS)
	@clang-format -i $^ -assume-filename=../.clang-format

clean:
	@if [ -e $(OBJDIR) ]; \
		then \
			rm -rf $(OBJDIR); \
			printf "\r\033[38;5;190m✗ clean -> $(NAME).\033[0m\033[K\n"; \
		fi;

fclean: clean
	@if [ -e $(NAME) ]; \
	then \
		rm -rf $(NAME); \
		printf "\r\033[38;5;196m✗ fclean -> $(NAME).\033[0m\033[K\n"; \
	fi;

re: fclean all

-include $(OBJS:.o=.d)
