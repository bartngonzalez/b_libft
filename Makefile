# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgonzale <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/11 17:29:55 by bgonzale          #+#    #+#              #
#    Updated: 2018/09/17 20:54:43 by bgonzale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -c

HEADER = libft.h

CFILES = ft_isdigit.c \
		 ft_memset.c \
		 ft_strchr.c \
		 ft_strcmp.c \
		 ft_strcpy.c \
		 ft_strdup.c \
		 ft_strlen.c \
		 ft_strncpy.c \
		 ft_tolower.c \
		 ft_toupper.c \

OBJS = $(CFILES:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -I.$(HEADER) $(CFILES)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
