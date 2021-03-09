# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmuselie <jmuselie@student.42lyon.f>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/09 12:48:06 by jmuselie          #+#    #+#              #
#    Updated: 2021/03/09 12:52:22 by jmuselie         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

# ============== #
# === OUTPUT === #
# ============== #

NAME = libft.a

# =============== #
# === SOURCES === #
# =============== #

# ~~~ Headers ~~~ #

HEADERS = libft.h

# ~~~ Main fonctions and additional functions ~~~ #
	# ~~~ sorted by chronological order ~~~ #

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
			ft_itoa.c \
			ft_putnbr_fd.c \
			ft_strjoin.c \
			ft_split.c \

# ~~~ Bonus : List related fonctions ~~~ #

SRCSBONUS = ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c

# ====================== #
# === COMPILER SETUP === #
# ====================== #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

# ============= #
# === RULES === #
# ============= #

# ~~~ Objects placeholders ~~~ #

OBJS = ${SRCS:.c=.o}

OBJSBONUS = ${SRCSBONUS:.c=.o}

# ~~~ Objects naming and compiling  ~~~ #

%.o : %.c ${HEADERS}
		${CC} ${CFLAGS} -c $< -o $@

# ~~~ Lib archiving - Main functions ~~~ #

${NAME}: ${OBJS}
		ar rcs ${NAME} ${OBJS}

# ~~~ Lib archiving - Bonus functions ~~~ #

bonus : ${NAME} ${OBJSBONUS}
		ar rcs ${NAME} ${OBJSBONUS}

# ~~~ Actions ~~~ #

all : ${NAME}

clean :
		${RM} ${OBJS} ${OBJSBONUS}

fclean : clean
		${RM} ${NAME}

re : fclean all

.PHONY : all bonus clean fclean re
