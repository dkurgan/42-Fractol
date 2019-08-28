# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danila <danila@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/08 21:42:15 by danila            #+#    #+#              #
#    Updated: 2019/08/28 14:09:46 by danila           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol
SRC = *.c
LIBFT = libft
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(LIBFT) $(OBJ)
	make -C libft
	make -C minilibx_macos
	gcc -g -Wall -Wextra -Werror -I includes/fractoil.h libft/libft.a -L ./minilibx_macos \
					-lmlx -framework OpenGL -framework AppKit $(SRC) -o $(NAME)

$(OBJ) : $(LIBFT)
		gcc -Wall -Werror -Wextra -g -c $(SRC)

clean :
			@-rm -f $(OBJ)
			@make clean -C libft
			@make clean -C minilibx_macos
			@echo "Done with obj files"

fclean : clean
	@rm -rf fractol
	@rm -rf fractol.dSYM

re: fclean all