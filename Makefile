NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlen.c ft_toupper.c tolower.c
OBJS = ${SRCS:.c=.o}

re:	fclean all

all:

$(NAME): ${OBJS}
		@echo "creating ${OBJS}"
		cc ${CFLAGS} ${OBJS} -o $@

$(OBJS): ${SRCS}
		@echo "creating object files"
		cc ${CFLAGS} -c ${SRCS}

fclean: clean
		@echo "removing ${SRCS} ${NAME}"
		rm ${NAME}

clean: 
		@echo "removing ${SRCS}"
		rm ${SRCS}
