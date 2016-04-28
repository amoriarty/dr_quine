# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alegent <alegent@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/13 12:17:39 by alegent           #+#    #+#              #
#    Updated: 2016/04/27 12:31:26 by alegent          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Sully

SRC_PATH= ./
SRC_NAME= Sully.c
SRC= $(addprefix $(SRC_PATH), $(SRC_NAME))

OBJ_PATH= obj/
OBJ_NAME= $(SRC_NAME:.c=.o)
OBJ= $(addprefix $(OBJ_PATH), $(OBJ_NAME))

GCC= clang -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@$(GCC) $(OBJ) -o $(NAME)
	@echo "Your program is ready to go !"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(OBJ_PATH) 2> /dev/null
	$(GCC) -o $@ -c $<

clean:
	@rm -rf $(OBJ)
	@rm -rf $(OBJ_PATH)
	@echo "Object files has been deleted"

fclean: clean
	@rm -rf $(NAME)
	@echo "Program has been deleted"

re: fclean all

.PHONY: clean fclean re norme
