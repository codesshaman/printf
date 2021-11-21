NAME	=	libftprintf.a

SRCS	=	ft_printf.c putchar.c putstr.c puthex.c putdec.c putuns.c putpnt.c

HEADER	=	ft_printf.h

OBJS	=	${SRCS:%.c=%.o}

CC		=	gcc

RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror -I${HEADER}

.PHONY:		all clean fclean re

.c.o:		${HEADER}
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS} ${HEADER}
	ar rcs ${NAME} $?

clean:		
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all