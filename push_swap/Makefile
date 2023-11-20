NAME = push_swap
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SOURCE = push_swap.c initstacks.c argchecking.c \
		ksort/sorting.c fiveandunder/fivesort.c fiveandunder/underfive.c \
		operations/push.c operations/revrotate.c operations/rotate.c \
		operations/swap.c utils/lstutils.c utils/sortingutils.c \
		utils/utils1.c utils/utils2.c
OBJ = $(SOURCE.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(SOURCE) -o $(NAME)


clean:
	rm -f $(OBJ)

fclean: clean	
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re