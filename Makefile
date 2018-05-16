# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gguiulfo <gguiulfo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/20 11:36:52 by gguiulfo          #+#    #+#              #
#    Updated: 2018/01/22 12:15:51 by gguiulfo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include functions.mk

NAME		:= libft.a

DEBUG			?= 1

CC				?= gcc
CFLAGS		+= -std=c99
CFLAGS		+= -Wall -Wextra -Werror
CFLAGS		+= -DDEBUG=${DEBUG}
# CFLAGS		+= -Wall -Wextra -Werror -Wfloat-equal -Wundef
# CFLAGS		+= -Wpointer-arith -Wunreachable-code -Winit-self
# CFLAGS		+= -O3 -march=native -pipe -flto

# ifeq ($(DEBUG),1)
# CFLAGS		+= -g -fsanitize=address
# endif

ifndef VERBOSE
MAKEFLAGS	+= --no-print-directory
endif

SRC_BASE	:=												\
$(addprefix arr/, $(ARR))									\
$(addprefix btree/, $(BTREE))								\
$(addprefix chr/, $(CHR))									\
$(addprefix darr/, $(DARR))									\
$(addprefix dstr/, $(DSTR))									\
$(addprefix err/, $(ERR))									\
$(addprefix opts/, $(OPTS))									\
$(addprefix ft_term/, $(FT_TERM))							\
$(addprefix gnl/, $(GNL))									\
$(addprefix heap/, $(HEAP))									\
$(addprefix lst/, $(LST))									\
$(addprefix mem/, $(MEM))									\
$(addprefix nbr/, $(NBR))									\
$(addprefix printf/, $(PRINTF_P))							\
$(addprefix printf/, $(PRINTF))								\
$(addprefix sort/, $(SORT))									\
$(addprefix sstr/, $(SSTR))									\
$(addprefix str/, $(STR))									\
$(addprefix sys/, $(SYS))

INC_DIR		:= includes/
OBJ_DIR		:= obj/
SRC_DIR		:= src/
SRC				:= $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_BASE)))
OBJ				:= $(patsubst $(SRC_DIR)%, $(OBJ_DIR)%, $(SRC:.c=.o))
INC_BASE	:= $(wildcard $(INC_DIR)*.h)
SHELL			:= /bin/bash
BASENAME  := `basename -s .a $(NAME)`
LEN_NAME	= `printf "%s" $(NAME) | wc -c`
DELTA			= $$(echo "$$(tput cols)-31-$(LEN_NAME)" | bc)
NB				= $(words $(SRC_BASE))
INDEX			= 0

all:
	@$(MAKE) -j $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@printf "\r\033[38;5;15m✓ make   $(BASENAME)\033[0m\033[K\n";

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(dir $(OBJ))

$(OBJ_DIR)%.o:$(SRC_DIR)%.c Makefile | $(OBJ_DIR)
	@$(eval DONE=$(shell echo $$(($(INDEX)*20/$(NB)))))
	@$(eval PERCENT=$(shell echo $$(($(INDEX)*100/$(NB)))))
	@$(eval TO_DO=$(shell echo $$((20-$(INDEX)*20/$(NB) - 1))))
	@$(eval COLOR=$(shell list=(141 105 69 33 39 45 51 87 123 159 195 231 15); index=$$(($(PERCENT) * $${#list[@]} / 100)); echo "$${list[$$index]}"))
	@printf "\r\033[38;5;%dm⌛ [%s]:%2d%% `printf '█%.0s' {0..$(DONE)}`%*s❙ %*.*s\033[0m\033[K" $(COLOR) $(NAME) $(PERCENT) $(TO_DO) "" $(DELTA) $(DELTA) "$(shell echo "$@" | sed 's/^.*\///')"
	@$(CC) $(CFLAGS) -MMD -c $< -o $@\
		-I $(INC_DIR)
	@$(eval INDEX=$(shell echo $$(($(INDEX)+1))))

clean:
	@if [ -e $(OBJ_DIR) ]; \
	then \
		rm -rf $(OBJ_DIR); \
		printf "\r\033[38;5;219m✗ clean  $(BASENAME)\033[0m\033[K\n"; \
	fi;

fclean: clean
	@if [ -e $(NAME) ]; \
	then \
		rm -rf $(NAME); \
		printf "\r\033[38;5;33m✗ fclean $(BASENAME)\033[0m\033[K\n"; \
	fi;

re: fclean all

.PHONY: all clean fclean re

-include $(OBJ:.o=.d)
