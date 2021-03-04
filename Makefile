# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/04 10:13:48 by marvin            #+#    #+#              #
#    Updated: 2021/03/04 10:13:48 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =		ft_memchr.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memccpy.c \
			ft_memmove.c \
			ft_memcmp.c \
			ft_strlen.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_isupper.c \
			ft_islower.c \
			ft_isspace.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strlen.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_strcpy.c \
			ft_substr.c \
			ft_strtrim.c \
			ft_strmapi.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_digit_count.c \
			ft_itoa.c \
			ft_putnbr_fd.c \
			ft_strjoin.c \
			ft_word_count.c \
			ft_split.c \

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

OBJS = ${SRCS:.c=.o}

${NAME}: ${OBJS}
		ar -rc ${NAME} ${OBJS}


all : ${NAME}

clean :		
		${RM} ${OBJS} ${OBJSBONUS}

fclean : clean
		${RM} ${NAME}

re : fclean all

