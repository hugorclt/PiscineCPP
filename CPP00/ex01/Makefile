# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/02 20:59:38 by hrecolet          #+#    #+#              #
#    Updated: 2022/06/13 12:40:36 by hrecolet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp Phonebook.cpp Contact.cpp

INCL		=	Contact.hpp Phonebook.hpp

CC			=	c++

CFLAGS		=	-Wall -Werror -Wextra -std=c++98

RM			=	rm -f

NAME		=	myawesomephonebook

%.o : %.cpp
	$(CC) $(CFLAGS) -o $@ -c $< 

OBJ			=	$(SRCS:.cpp=.o)

all			:	$(NAME) 

$(NAME)		:	$(OBJ) Contact.hpp Phonebook.hpp
				$(CC) $(CFLAGS) $(OBJ) -o $(NAME) 
		
clean		:	
				$(RM) $(OBJ)

fclean		:	clean
				$(RM) $(NAME)

re			:	fclean all

.PHONY		:	clean fclean re all
