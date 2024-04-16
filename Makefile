# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nyherrer <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/15 20:01:19 by nyherrer          #+#    #+#              #
#    Updated: 2024/04/15 20:01:19 by nyherrer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
AR = ar
ARFLAGS = crs
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm
RMFLAGS = -f
INCLUDES = ./libft.h
SRC_PART1 = \
	./ft_memset.c	\
	./ft_bzero.c	\
	./ft_memcpy.c	\
	./ft_memmove.c	\
	./ft_memchr.c	\
	./ft_memcmp.c	\
	./ft_calloc.c	\
	./ft_strlen.c	\
	./ft_strlcpy.c	\
	./ft_strlcat.c	\
	./ft_strchr.c	\
	./ft_strrchr.c	\
	./ft_strncmp.c	\
	./ft_strnstr.c	\
	./ft_strdup.c	\
	./ft_isdigit.c	\
	./ft_atoi.c		\
	./ft_isalpha.c	\
	./ft_isalnum.c	\
	./ft_isascii.c	\
	./ft_isprint.c	\
	./ft_toupper.c	\
	./ft_tolower.c
SRC_PART2 = \
	./ft_substr.c	\
	./ft_strjoin.c	\
	./ft_strtrim.c	\
	./ft_split.c	\
	./ft_itoa.c		\
	./ft_strmapi.c	\
	./ft_striteri.c \
	./ft_putchar_fd.c	\
	./ft_putstr_fd.c	\
	./ft_putendl_fd.c	\
	./ft_putnbr_fd.c
SRCS = \
	$(SRC_PART1)	\
	$(SRC_PART2)
OBJS = $(SRCS:.c=.o)
all : $(NAME)
clean :
	$(RM) $(RMFLAGS) $(OBJS)
fclean : clean
	$(RM) $(RMFLAGS) $(NAME)
re : fclean all
.c.o : $(SRCS) $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@
$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $^
.PHONY: all clean fclean re