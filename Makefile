# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gguiulfo <gguiulfo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/20 11:36:52 by gguiulfo          #+#    #+#              #
#    Updated: 2017/08/01 16:10:27 by gguiulfo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library Name
NAME	:= libft.a

# Compiler Information
CC		:=	gcc
CFLAGS	+= -Wall -Wextra -Werror -O3

# Directories
INC_DIR	:= includes/
OBJ_DIR	:= obj/
SRC_DIR	:= src/

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
FT_CTYPE :=					\
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

FILES	:=										\
	$(addprefix arr/, $(ARR))					\
	$(addprefix chr/, $(CHR))					\
	$(addprefix dnarr/, $(DNARR))				\
	$(addprefix ft_ctype/, $(FT_CTYPE))			\
	$(addprefix ft_heap/, $(FT_HEAP))			\
	$(addprefix ft_math/, $(FT_MATH))			\
	$(addprefix ft_printf/, $(FT_PRINTF_H))		\
	$(addprefix ft_printf/, $(FT_PRINTF))		\
	$(addprefix sort/, $(FT_SORT))				\
	$(addprefix ft_stdlib/, $(FT_STDLIB))		\
	$(addprefix ft_string/, $(FT_STRING))		\
	$(addprefix ft_term/, $(FT_TERM))			\
	$(addprefix vector/, $(FT_VECTOR))			\
	$(addprefix gnl/, $(GNL))					\
	$(addprefix lst/, $(LST))					\
	$(addprefix mem/, $(MEM))					\
	$(addprefix nbr/, $(NBR))					\
	$(addprefix str/, $(STR))					\

# File Assignation
SRC			:=	$(addprefix $(SRC_DIR)/, $(addsuffix .c, $(FILES)))
OBJ			:=	$(patsubst $(SRC_DIR)/%, $(OBJ_DIR)/%, $(SRC:.c=.o))
HEADERS		:=  $(wildcard $(INC_DIR)/*.h)

# Output Dependencies
NB			= $(words $(FILES))
INDEX		= 0
LEN_NAME	= `printf "%s" $(NAME) | wc -c`
DELTA		= $$(echo "$$(tput cols)-31-$(LEN_NAME)" | bc)
SHELL		= /bin/bash

# Rules:
## Compiles the library
all:
	@$(MAKE) $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@printf "\r\033[38;5;15m✓ Compiled $(NAME)\033[0m\033[K\n";

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(dir $(OBJ))

$(OBJ_DIR)%.o:$(SRC_DIR)%.c Makefile | $(OBJ_DIR)
	@$(eval DONE=$(shell echo $$(($(INDEX)*20/$(NB)))))
	@$(eval PERCENT=$(shell echo $$(($(INDEX)*100/$(NB)))))
	@$(eval TO_DO=$(shell echo $$((20-$(INDEX)*20/$(NB) - 1))))
	@$(eval COLOR=$(shell list=(141 105 69 33 39 45 51 87 123 159 195 231 15); index=$$(($(PERCENT) * $${#list[@]} / 100)); echo "$${list[$$index]}"))
	@printf "\r\033[38;5;%dm⌛ [%s]:%2d%% `printf '█%.0s' {0..$(DONE)}`%*s❙ %*.*s\033[0m\033[K" $(COLOR) $(NAME) $(PERCENT) $(TO_DO) "" $(DELTA) $(DELTA) "$(shell echo "$@" | sed 's/^.*\///')"
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@
	@$(eval INDEX=$(shell echo $$(($(INDEX)+1))))

## Attempts to format source code according to the "Norme" standard
## Note: Do not use if code is already or mostly "normed"
format: $(SRC) $(HEADERS)
	@clang-format -i $^ -assume-filename=../.clang-format

## Removes object files if they are present
clean:
	@if [ -e $(OBJ_DIR) ]; \
		then \
			rm -rf $(OBJ_DIR); \
			printf "\r\033[38;5;219m✗ Removed $(NAME) $(OBJ_DIR).\033[0m\033[K\n"; \
		fi;

## Removes the library and the object files if they're present
fclean: clean
	@if [ -e $(NAME) ]; \
	then \
		rm -rf $(NAME); \
		printf "\r\033[38;5;33m✗ Removed $(NAME).\033[0m\033[K\n"; \
	fi;

## Relinks the library
re: fclean all

.PHONY: all format clean fclean re
-include $(OBJ:.o=.d)
