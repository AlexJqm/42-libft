# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 10:24:54 by aljacque          #+#    #+#              #
#    Updated: 2018/11/13 16:53:26 by aljacque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libft.a

# SOURCES PROJECTS #

SRC				=\
					ft_isalnum.c \
					ft_isprint.c \
					ft_memcpy.c \
					ft_strchr.c \
					ft_strlcat.c \
					ft_strncpy.c \
					ft_tolower.c \
					ft_isalpha.c \
					ft_memccpy.c \
					ft_memmove.c \
					ft_strcmp.c \
					ft_strlen.c \
					ft_strnstr.c \
					ft_toupper.c \
					ft_atoi.c \
					ft_isascii.c \
					ft_memchr.c \
					ft_memset.c \
					ft_strcpy.c \
					ft_strncat.c \
					ft_strrchr.c \
					ft_bzero.c \
					ft_isdigit.c \
					ft_memcmp.c \
					ft_strcat.c \
					ft_strdup.c \
					ft_strncmp.c \
					ft_strstr.c \
					ft_memalloc.c \
					ft_memdel.c \
					ft_strnew.c \
					ft_strdel.c \
					ft_strclr.c \
					ft_striter.c \
					ft_striteri.c \
					ft_strmap.c \
					ft_strmapi.c \
					ft_strequ.c \
					ft_strnequ.c \
					ft_strsub.c \
					ft_strjoin.c \
					ft_strtrim.c \
					ft_strsplit.c \
					ft_itoa.c \
					ft_putchar.c \
					ft_putstr.c \
					ft_putendl.c \
					ft_putnbr.c \
					ft_putchar_fd.c \
					ft_putstr_fd.c \
					ft_putendl_fd.c \
					ft_putnbr_fd.c \
					ft_lstnew.c \
					ft_strrev.c \
					ft_putlen.c \
					ft_tablen.c
OBJ				=	*.o
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

# EXE #

all: $(NAME)

$(NAME):
	@echo "\n\t⚙️  Creation of $(LOG_RED)$(NAME)$(LOG_NOCOLOR) ..."
	@gcc $(CFLAG) -c $(SRC) -I $(HEADER)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\t$(LOG_GREEN)$(NAME)$(LOG_NOCOLOR) created.\n"

norm:
	norminette -RCheckForbiddenSourceHeader $(SRCS) | grep -e 'Warning' -e 'Error' -B1 || true

show:
	cat *.c | less

clean:
	@echo "$(LOG_NOCOLOR)\n\tRemoval of .o files of $(LOG_RED)$(NAME)$(LOG_NOCOLOR) ..."
	@rm -f $(OBJ)
	@echo "\t🗑️  $(LOG_GREEN)$(NAME)$(LOG_NOCOLOR) .o deleted.\n"

fclean: clean
	@echo "\n\tRemoval of $(LOG_RED)$(NAME)$(LOG_NOCOLOR) ..."
	@rm -rf $(NAME)
	@echo "\t🗑️  Binary $(LOG_GREEN)$(NAME)$(LOG_NOCOLOR) deleted.\n"

re: fclean all
