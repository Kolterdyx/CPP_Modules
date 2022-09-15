
NAME = megaphone

SRC = megaphone.cpp
OBJ = megaphone.o

CC = g++

CFLAGS = -Werror -Wall -Wextra -std=c++98

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

.PHONY: all clean fclean re

all = $(NAME)

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all