# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/02 20:59:38 by hrecolet          #+#    #+#              #
#    Updated: 2022/09/13 14:58:23 by hrecolet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp Brain.cpp Animal.cpp WrongAnimal.cpp Cat.cpp Dog.cpp

INCL		=	Brain.hpp Animal.hpp WrongAnimal.hpp

CC			=	c++

CFLAGS		=	-Wall -Werror -Wextra -std=c++98 -g3

RM			=	rm -f

NAME		=	brain

OBJ			=	$(SRCS:.cpp=.o)

all			:	$(NAME) 

%.o : %.cpp
	$(CC) $(CFLAGS) -o $@ -c $< 

$(NAME)		:	$(OBJ) $(INCL)
				$(CC) $(CFLAGS) $(OBJ) -o $(NAME) 
		
clean		:	
				$(RM) $(OBJ)

fclean		:	clean
				$(RM) $(NAME)

re			:	fclean all

.PHONY		:	clean fclean re all
