# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/13 14:02:05 by lgenevey          #+#    #+#              #
#    Updated: 2022/07/18 15:22:09 by nakawashi        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
SRCS =	ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strlen.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c

SRCS_BONUS =	ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstadd_back.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

BLUE	= \033[0;34m
GREEN	= \033[0;32m
NONE	= \033[0m

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS)
	ar rcs $(NAME) $(OBJS)
	@printf "$(GREEN) $(NAME) ready.\n$(NONE)"

bonus: $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS_BONUS)
	@printf "$(GREEN) $(NAME) bonus ready.\n$(NONE)"

clean:
	rm -f $(OBJS) $(OBJS_BONUS)
	@printf "$(BLUE) .o cleaned.\n$(NONE)"

fclean: clean
	rm -f  $(NAME)
	@printf "$(BLUE) $(NAME) cleaned.\n$(NONE)"

re: fclean all

.PHONY: all bonus clean fclean re
.SILENT: $(NAME) bonus clean fclean re
