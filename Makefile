SRCS = 		ft_atoi.c ft_calloc.c ft_isprint.c ft_memmove.c ft_strlcat.c ft_strrchr.c ft_isalnum.c ft_lstnew.c \
 			ft_memset.c ft_strlcpy.c ft_substr.c ft_isalpha.c ft_memchr.c ft_strchr.c ft_strlen.c ft_tolower.c ft_atoi.c\
 			ft_isascii.c ft_memcmp.c ft_strdup.c ft_strncmp.c ft_toupper.c ft_bzero.c ft_isdigit.c ft_memcpy.c ft_strjoin.c\
 			ft_strnstr.c

OBJS = 		${SRCS:.c=.o}

HEADER = 	libft.h

CC = 		cc

CFLAGS =	-Wall -Werror -Wextra

RM = 		rm -f

NAME = 		libft.a

all:		${NAME}

%.o: %.c	${HEADER} Makefile
	 ${CC} ${CFLAGS} -I -c $< -o $@
	

${NAME}: 	${OBJS} ${HEADER}
			ar -rcs ${NAME} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean ${NAME}

.PHONY:		all fclean clean re

