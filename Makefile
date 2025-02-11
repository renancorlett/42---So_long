# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcorlett <rcorlett@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/11 11:31:10 by rcorlett          #+#    #+#              #
#    Updated: 2025/02/11 11:31:14 by rcorlett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#==============================================================================#
#                                    NAMES                                     #
#==============================================================================#

CC = cc
CFLAGS = -g -Wall -Wextra -Werror
MLXFLAGS = -L ./minilibx-linux -lmlx -lXext -lX11 -lm
INC = -I./includes
LIBFT = ./libft/libft.a
MLX = ./minilibx-linux/libmlx_Linux.a
RM = rm -rf

GENERAL = main kill init
PARSING = extension validation validation1
MAP = utils free
RENDER = render
MOVEMENTS = movement movement1

NAME = so_long

#==============================================================================#
#                                    PATHS                                     #
#==============================================================================#

VPATH += src
VPATH += src/parsing
VPATH += src/map
VPATH += src/render
VPATH += src/movements

#==============================================================================#
#                                    FILES                                     #
#==============================================================================#

SRC +=	$(addsuffix .c, $(GENERAL))
SRC +=	$(addsuffix .c, $(PARSING))
SRC +=	$(addsuffix .c, $(MAP))
SRC +=	$(addsuffix .c, $(RENDER))
SRC +=	$(addsuffix .c, $(MOVEMENTS))

OBJ_DIR = obj
OBJS = $(SRC:%.c=$(OBJ_DIR)/%.o)

#==============================================================================#
#                                    RULES                                     #
#==============================================================================#

all: $(NAME)

$(LIBFT):
	$(MAKE) -C ./libft

$(MLX):
	$(MAKE) -C ./minilibx-linux

$(OBJ_DIR):
	mkdir -p obj

$(OBJ_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INC)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ $(BONUS_INC)

$(NAME): $(OBJ_DIR) $(OBJS) $(LIBFT) $(MLX)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(MLX) $(MLXFLAGS) -o $(NAME)

clean:
	$(MAKE) clean -C ./libft
	$(MAKE) clean -C ./minilibx-linux
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) fclean -C ./libft
	$(MAKE) clean -C ./minilibx-linux
	$(RM) $(NAME) $(OBJ_DIR)

re: fclean all

.SILENT:
