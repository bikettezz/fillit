#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jusylvai <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/26 22:25:23 by jusylvai          #+#    #+#              #
#    Updated: 2016/11/26 22:25:23 by jusylvai         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = fillit

SRC =  	main.c\
		ft_error.c

LIB = libft/libft.a 

all: $(NAME)

$(NAME):
	@printf "Compilation\t\t\t"
	@make -C libft/ re
	@gcc -Wall -Werror -Wextra $(SRC) $(LIB) -o $(NAME)

clean:
	@printf "Destruction\t\t\t"
	@make -C libft clean
	@printf "OK\n"

fclean:
	@rm -f $(NAME)
	@make -C libft fclean

re: fclean all