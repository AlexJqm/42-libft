# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 10:24:54 by aljacque          #+#    #+#              #
#    Updated: 2018/11/07 11:57:39 by aljacque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = *.c
OBJ = *.o
HEADER = libft.h
CFLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(CFLAG) -c $(SRC) -I $(HEADER)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
