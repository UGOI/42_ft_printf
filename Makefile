SRCS	= ft_printf.c ft_count_formats.c ft_print_in_format.c ft_numlen.c ft_putpoin.c ft_ptrlen.c \
			ft_putnbr_base.c ft_put_unsig_nbr_fd.c ft_put_unsig_long_nbr_base.c \
				ft_print_s.c ft_print_d.c ft_print_c.c ft_print_p.c ft_print_x.c \
				ft_print_bigx.c ft_print_i.c ft_print_u.c ft_numlen_base.c ft_unumlen.c \
				ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strchr.c ft_strlen.c

BONUS	=

OBJS	= ${SRCS:.c=.o}

BONUS_O	= ${BONUS:.c=.o}

NAME	= libftprintf.a

CC		= cc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
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
