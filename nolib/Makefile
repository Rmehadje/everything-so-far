# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 14:56:17 by rmehadje          #+#    #+#              #
#    Updated: 2023/10/27 13:47:38 by rmehadje         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := fractol
CFLAGS := -Wextra -Wall -Werror -g -O3 -funroll-loops
LIBMLX := ./lib/MLX42
HEADERS := -I ./include -I $(LIBMLX)/include
LIBS := $(LIBMLX)/build/libmlx42.a
SRCS := fractol.c init.c movement.c Mandelbrot.c \
Julia.c atof.c
LDFLAGS := -ldl -L $(LIBMLX)/glfw_lib/ -lglfw3 -pthread -lm -flto -framework Cocoa -framework OpenGL -framework IOKit
OBJS := $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) $(HEADERS) -o $@ -c $<

$(NAME): $(OBJS)
	@$(CC) $(OBJS) $(LIBS) $(HEADERS) $(LDFLAGS) -o $(NAME)

MLX:
	chmod 755 setup_libs.sh
	sh setup_libs.sh

rmlib:
	rm -rf lib/MLX42

clean:
	@rm -rf $(OBJS)

fclean: clean
	rm -f $(OBJS) $(NAME)

re: fclean all

.PHONY: all MLX rmlib clean fclean re