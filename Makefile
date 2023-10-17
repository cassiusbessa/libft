INCLUDE_SRC = ./srcs

SRCS	= *.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC	= cc
RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		ar -rvs ${NAME} ${OBJS}

all:		${NAME}

clean:
	${RM} ${OBJS}

fclean:		clean
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
