SRCS	= ft_printf.c ft_count_formats.c ft_get_formats.c

BONUS	=

OBJS	= ${SRCS:.c=.o}

BONUS_O	= ${BONUS:.c=.o}

NAME	= libprintf.a

CC		= cc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			cd Libft && make && cd ..
			ar -rcs ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS} ${BONUS_O}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

bonus:		${BONUS_O} ${OBJS}
			ar -rcs ${NAME} ${BONUS_O} ${OBJS}

.PHONY:		all clean fclean re bonus
