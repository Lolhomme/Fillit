# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alaulom <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/02 14:41:24 by alaulom           #+#    #+#              #
#    Updated: 2016/04/02 14:55:08 by alaulom          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILLIT = fillit
NAME = $(FILLIT)
LIBFT = libft.a
GCC_FLAGS = -Wall -Werror -Wextra
CC = gcc $(GCC_FLAGS)
RM = rm -rf

SRCS = main.c \
	   error.c \
	   fillit.c \
	   tetrimino_new.c \
	   tetrimino_pos.c \
	   tetrimino_view.c \
	   tetrimino_collide.c\
	   tetrimino_clean.c \
	   tetrimino_count.c \
	   map_new.c \
	   map_view.c \
	   map_dup.c \
	   map_check_tetrimino.c \
	   map_print_tetrimino.c \
	   map_unprint_tetrimino.c \
	   map_reset_tetriminos.c \
	   map_solve.c \
	   recursive.c

SRCDIR = .
OBJDIR = .
OBJS = $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	@$(CC) -Llibft $(OBJS) -lft -o $(NAME)
	@echo "Fillit OK"

$(addprefix $(OBJDIR)/, %.o): $(addprefix $(SRCDIR)/, %.c)
	@mkdir -p $(OBJDIR)
	@$(CC) -o $@ -c $^

$(LIBFT):
	@make -C ./libft/
	@echo "Libft OK"

clean:
	@$(RM) $(OBJS)
	@make clean -C ./libft/

fclean: clean
	@$(RM) $(LIBFT)
	@$(RM) $(NAME)
	@make fclean -C ./libft/

re: fclean all
