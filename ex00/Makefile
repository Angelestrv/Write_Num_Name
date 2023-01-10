NAME = rush-02

SRCS = main.c rsh1.c rsh2.c rsh3.c rsh4.c rsh5.c rsh6.c rsh7.c

OBJS = ${SRC:.c=.o}

INCLUDE = header.h

FLAGS = -Wall -Werror -Wextra

all:	${NAME}

${NAME}: ${OBJS}
	gcc -o  ${NAME} ${SRCS} -Iincludes ${FLAGS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean