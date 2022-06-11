# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/02 20:59:38 by hrecolet          #+#    #+#              #
#    Updated: 2022/03/15 14:52:53 by hrecolet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

INCL		=	HumanA.hpp HumanB.hpp Weapon.hpp

CC			=	c++

CFLAGS		=	-Wall -Werror -Wextra

RM			=	rm -f

NAME		=	UselessViolence

OBJ			=	$(SRCS:.cpp=.o)

all			:	$(NAME) 


$(NAME)		:	$(OBJ) 
				$(CC) $(CFLAGS) $(OBJ) -o $(NAME) 
		
clean		:	
				$(RM) $(OBJ)

fclean		:	clean
				$(RM) $(NAME)

re			:	fclean all

.PHONY		:	clean fclean re all
