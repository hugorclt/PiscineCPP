# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/02 20:59:38 by hrecolet          #+#    #+#              #
#    Updated: 2022/06/11 11:02:50 by hrecolet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp Fixed.cpp

INCL		=	Fixed.hpp

CC			=	c++

CFLAGS		=	-Wall -Werror -Wextra -std=c++98

RM			=	rm -f

NAME		=	myfirstcanon

OBJ			=	$(SRCS:.cpp=.o)

all			:	$(NAME) 


$(NAME)		:	$(OBJ) $(INCL)
				$(CC) $(CFLAGS) $(OBJ) $(INCL) -o $(NAME) 
		
clean		:	
				$(RM) $(OBJ)

fclean		:	clean
				$(RM) $(NAME)

re			:	fclean all

.PHONY		:	clean fclean re all
