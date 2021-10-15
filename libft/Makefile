# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/13 14:03:12 by jlaurent          #+#    #+#              #
#    Updated: 2021/10/15 14:42:41 by jlaurent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strrchr.c\
ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strncmp.c\
ft_memchr.c ft_memcmp.c ft_atoi.c ft_calloc.c ft_strdup.c ft_strnstr.c

OBJS	= ${SRCS:.c=.o}

GCC		= gcc -Wall -Wextra -Werror -c

RM		= rm -f

AR		= ar cr

RANLIB	= ranlib

NAME	= libft.a

.c.o:
						${GCC} $< -o ${<:.c=.o}

${NAME}:		${OBJS}
						${AR} ${NAME} ${OBJS}
						${RANLIB} ${NAME}

all:			${NAME}

clean:
							${RM} ${OBJS}

fclean:			clean
							${RM} ${NAME}

re:				fclean all

.PHONY:			all clean fclean re
