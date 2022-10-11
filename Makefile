# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sel-jala <sel-jala@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/26 20:18:39 by sel-jala          #+#    #+#              #
#    Updated: 2022/09/27 17:06:20 by sel-jala         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
NAME_BONUS = so_long_bonus
INC = so_long.h
INC_BONUS = so_long_bonus.h
CC = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
CFILES = ./gnl/get_next_line.c ./gnl/get_next_line_utils.c \
		 ./ft_printf/ft_functions.c ./ft_printf/ft_functions2.c \
		 ./ft_printf/ft_printf.c \
		 ./mandatory/ft_map.c ./mandatory/ft_check_error.c ./mandatory/ft_check_map_elements.c \
		 ./mandatory/mlx.c ./mandatory/mouvement.c ./mandatory/mlx_loop.c \
		 ./mandatory/so_long.c

CFILES_BONUS = ./gnl/get_next_line.c ./gnl/get_next_line_utils.c \
		 ./ft_printf/ft_functions.c ./ft_printf/ft_functions2.c \
		 ./ft_printf/ft_printf.c \
		 ./bonus/check_map.c ./bonus/display_mouvement.c \
		 ./bonus/enemy.c ./bonus/handle.c ./bonus/heart.c ./bonus/map.c \
		 ./bonus/mlx_destroy.c ./bonus/mlx_loop.c ./bonus/mlx.c ./bonus/move_enemy.c \
		 ./bonus/moves.c ./bonus/so_long_bonus.c ./bonus/utils_bonus.c

OFILES = $(CFILES:.c=.o)
OFILES_BONUS = $(CFILES_BONUS:.c=.o)

all: $(NAME)

$(NAME) : $(OFILES)
	$(CC) -lmlx -framework OpenGL -framework AppKit $^ -o $@
bonus : $(NAME_BONUS)
$(NAME_BONUS) : $(OFILES_BONUS)
	$(CC) -lmlx -framework OpenGL -framework AppKit $^ -o $@
	
%.o:%.c $(INC) $(INC_BONUS)
	$(CC) $(FLAGS) -c $^ -o $@

clean:
	$(RM) $(OFILES) $(OFILES_BONUS)
	
fclean: clean
	$(RM) $(NAME) $(NAME_BONUS)
	
re: fclean all