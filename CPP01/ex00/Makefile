# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/02 20:59:38 by hrecolet          #+#    #+#              #
#    Updated: 2022/03/03 05:16:31 by hrecolet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

INCL		=	Zombie.hpp

CC			=	g++

CFLAGS		=	-Wall -Werror -Wextra

RM			=	rm -f

NAME		=	myawesomephonebook

OBJ			=	$(SRCS:.cpp=.o)

all			:	$(NAME) 


$(NAME)		:	$(OBJ) Contact.hpp Phonebook.hpp
				$(CC) $(CFLAGS) $(OBJ) $(INCL) -o $(NAME) 
		
clean		:	
				$(RM) $(OBJ)

fclean		:	clean
				$(RM) $(NAME)

re			:	fclean all

.PHONY		:	clean fclean re all
