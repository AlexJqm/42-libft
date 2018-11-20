# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 10:24:54 by aljacque          #+#    #+#              #
#    Updated: 2018/11/20 15:38:17 by aljacque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libft.a

# SOURCES #

SRC				=\
					ft_atoi.c \
					ft_bzero.c \
					ft_color.c \
					ft_do_op.c \
					ft_isalnum.c \
					ft_isalpha.c \
					ft_isascii.c \
					ft_isblank.c \
					ft_isdigit.c \
					ft_isprint.c \
					ft_isspace.c \
					ft_itoa.c \
					ft_lstadd.c \
					ft_lstdel.c \
					ft_lstdelone.c \
					ft_lstiter.c \
					ft_lstmap.c \
					ft_lstnew.c \
					ft_memalloc.c \
					ft_memccpy.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_memcpy.c \
					ft_memdel.c \
					ft_memmove.c \
					ft_memset.c \
					ft_putchar.c \
					ft_putchar_fd.c \
					ft_putendl.c \
					ft_putendl_fd.c \
					ft_putlen.c \
					ft_putnbr.c \
					ft_putnbr_fd.c \
					ft_putstr.c \
					ft_putstr_fd.c \
					ft_strcat.c \
					ft_strchr.c \
					ft_strclr.c \
					ft_strclen.c \
					ft_strcmp.c \
					ft_strcpy.c \
					ft_strdel.c \
					ft_strdup.c \
					ft_strequ.c \
					ft_striter.c \
					ft_striteri.c \
					ft_strjoin.c \
					ft_strlcat.c \
					ft_strlen.c \
					ft_strmap.c \
					ft_strmapi.c \
					ft_strncat.c \
					ft_strncmp.c \
					ft_strncpy.c \
					ft_strndup.c \
					ft_strnequ.c \
					ft_strnew.c \
					ft_strnset.c \
					ft_strnstr.c \
					ft_strrchr.c \
					ft_strrev.c \
					ft_strset.c \
					ft_strsplit.c \
					ft_strstr.c \
					ft_strsub.c \
					ft_strtrim.c \
					ft_swap.c \
					ft_tolower.c \
					ft_toupper.c
OBJ			=	$(SRC:.c=.o)
HEADER			=	libft.h
CFLAG			=	-Wall -Werror -Wextra

# COLOR MACRO #

LOG_CLEAR		=	\033[2K
LOG_UP 			=	\033[A
LOG_NOCOLOR		=	\033[0m
LOG_BLACK		=	\033[1;30m
LOG_RED			=	\033[1;31m
LOG_GREEN		=	\033[1;32m
LOG_YELLOW		=	\033[1;33m
LOG_BLUE		=	\033[1;34m
LOG_VIOLET		=	\033[1;35m
LOG_CYAN		=	\033[1;36m
LOG_WHITE		=	\033[1;37m

# EXEC #

all: $(NAME)

$(NAME):
	@echo "\n\t$(LOG_RED)██$(LOG_NOCOLOR) please wait..."
	@gcc $(CFLAG) -c $(SRC) -I $(HEADER)
	@echo "\t$(LOG_GREEN)██$(LOG_NOCOLOR) compilation OK"
	@ar rc $(NAME) $(OBJ)
	@echo "\t$(LOG_GREEN)██$(LOG_NOCOLOR) ar rc OK"
	@ranlib $(NAME)
	@echo "\t$(LOG_GREEN)██$(LOG_NOCOLOR) ranlib OK"
	@echo "\t$(LOG_GREEN)██$(LOG_NOCOLOR) $(NAME) created.\n"

clean:
	@echo "\n\t$(LOG_RED)██$(LOG_NOCOLOR) please wait..."
	@rm -f $(OBJ)
	@echo "\t$(LOG_GREEN)██$(LOG_NOCOLOR) rm .o OK"
	@echo "\t$(LOG_GREEN)██$(LOG_NOCOLOR) $(NAME) succes all .o deleted.\n"

fclean: clean
	@echo "\n\t$(LOG_RED)██$(LOG_NOCOLOR) please wait..."
	@rm -f $(NAME)
	@echo "\t$(LOG_GREEN)██$(LOG_NOCOLOR) rm $(NAME) OK"
	@echo "\t$(LOG_GREEN)██$(LOG_NOCOLOR) $(NAME) succes $(NAME) deleted.\n"

re: fclean all

# EXTRA #

norm:
	@echo "\n\t$(LOG_RED)██$(LOG_NOCOLOR) please wait...\n"
	@norminette -RCheckForbiddenSourceHeader $(SRCS) | grep -e 'Warning' -e 'Error' -B1 || true
	@echo "\n\t$(LOG_GREEN)██$(LOG_NOCOLOR) norminette finish.\n"

help:
	@echo "\n\t$(LOG_YELLOW)clean$(LOG_NOCOLOR)\t\tCleaning all object"
	@echo "\t$(LOG_YELLOW)fclean$(LOG_NOCOLOR)\t\tCleaning all object and executable"
	@echo "\t$(LOG_YELLOW)norm$(LOG_NOCOLOR)\t\tCheck norminette"
	@echo "\t$(LOG_YELLOW)re$(LOG_NOCOLOR)\t\tDeleting all object and build\n"
