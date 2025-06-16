# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avieira- <avieira-@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/21 12:18:39 by avieira-          #+#    #+#              #
#    Updated: 2025/06/12 17:08:35 by avieira-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = srcs/ft_atoi.c srcs/ft_bzero.c srcs/ft_isalnum.c srcs/ft_isalpha.c
SRCS += srcs/ft_isascii.c srcs/ft_isdigit.c srcs/ft_isspace.c
SRCS += srcs/ft_isprint.c srcs/ft_memcpy.c srcs/ft_memset.c srcs/ft_strlen.c
SRCS += srcs/ft_tolower.c srcs/ft_memmove.c srcs/ft_strnstr.c srcs/ft_strchr.c
SRCS += srcs/ft_strrchr.c srcs/ft_strtrim.c srcs/ft_split.c srcs/ft_putendl_fd.c
SRCS += srcs/ft_strlcat.c srcs/ft_itoa.c srcs/ft_strdup.c srcs/ft_strncmp.c
SRCS += srcs/ft_memcmp.c srcs/ft_calloc.c srcs/ft_substr.c srcs/ft_strjoin.c
SRCS += srcs/ft_strmapi.c srcs/ft_striteri.c srcs/ft_putchar_fd.c 
SRCS += srcs/ft_putstr_fd.c srcs/ft_toupper.c srcs/ft_strlcpy.c srcs/ft_memchr.c
SRCS += srcs/ft_putnbr_fd.c srcs/ft_printf.c srcs/ft_printadd.c
SRCS += srcs/ft_printchar.c srcs/ft_printhex.c srcs/ft_printnbr.c
SRCS += srcs/ft_printunsign_nbr.c srcs/ft_printstr.c srcs/ft_issign.c
SRCS += srcs/ft_lstnew_bonus.c srcs/ft_lstdelone_bonus.c srcs/ft_strcmp.c
SRCS += srcs/ft_lstsize_bonus.c srcs/ft_lstlast_bonus.c
SRCS += srcs/ft_lstadd_back_bonus.c srcs/ft_lstadd_front_bonus.c
SRCS += srcs/ft_lstclear_bonus.c srcs/ft_lstiter_bonus.c srcs/ft_lstmap_bonus.c
SRCS += srcs/get_next_line.c srcs/get_next_line_utils.c
OBJS = $(SRCS:.c=.o)

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
