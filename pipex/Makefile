NAME = pipex

CC = gcc

CFLAGS = -Wextra -Werror -Wall

RM = rm -rf

SRCS = pipex.c utils.c utils2.c utils3.c
OBJS := $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean :
	@rm -rf $(OBJS)
fclean : clean
	rm -f $(OBJS) $(NAME)

re : fclean all
.PHONY: all rmlib clean fclean re