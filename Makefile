# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avieira- <avieira-@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/21 12:18:39 by avieira-          #+#    #+#              #
#    Updated: 2025/04/21 13:06:02 by avieira-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c
SRCS += ft_isprint.c ft_memcpy.c ft_memset.c ft_strlen.c ft_toupper.c
SRCS += ft_tolower.c ft_memmove.c ft_strnstr.c ft_strchr.c ft_strrchr.c
SRCS += ft_strlcat.c ft_itoa.c ft_strdup.c ft_strncmp.c ft_strlcpy.c ft_memchr.c
SRCS += ft_memcmp.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c
SRCS += ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c
SRCS += ft_putnbr_fd.c
BONUS = ft_lstnew_bonus.c ft_lstdelone_bonus.c ft_lstadd_front_bonus.c
BONUS += ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c
BONUS += ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJS = $(SRCS:.c=.o)
B_OBJS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

%.o: %.c 
		cc $(CFLAGS) -c $^ -o $@

clean: 
		rm -f .bonus $(OBJS) $(B_OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

bonus: .bonus

.bonus: ${NAME} ${B_OBJS} 
		ar rc ${NAME} ${B_OBJS}
		touch .bonus
