SRCS = ft_printf.c ft_arguments.c ft_printf_utils.c

OBJS = ${SRCS:.c=.o}

GCC = gcc -Wall -Wextra -Werror

NAME = libftprintf.a

.c.o :
		${GCC} -I ft_printf.h -c $< -o ${<:.c=.o}

$(NAME) : ${OBJS}
		ar rcs ${NAME} ${OBJS}

all : $(NAME)

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY : .c.o all bonus clean fclean re
