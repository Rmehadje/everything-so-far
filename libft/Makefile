NAME = libft.a

SOURCES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c  \
ft_isdigit.c ft_isalpha.c ft_isascii.c ft_isprint.c  \
ft_memchr.c ft_memcmp.c ft_memmove.c ft_memset.c  \
ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c  \
ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c  \
ft_tolower.c ft_toupper.c ft_memcpy.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putnbr_fd.c ft_putendl.c ft_striteri.c \
ft_strmapi.c ft_substr.c ft_strtrim.c ft_strjoin.c \
ft_itoa.c ft_split.c

BONUS = ft_lstsize.c ft_lstnew.c  ft_lstadd_front.c  ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c  ft_lstiter.c \
ft_lstmap.c

CC = cc -c

all: $(NAME)

$(NAME):
	$(CC) -Wall -Wextra -Werror $(SOURCES)
	ar rcs $(NAME) *.o

bonus:
	$(CC) -Wall -Wextra -Werror $(BONUS)
	ar rcs $(NAME) *.o

clean:
	rm -f *.o

fclean:	clean
			rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus