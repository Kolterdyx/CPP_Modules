
NAME = harl2.0

SRCS = main.cpp Harl.cpp
OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Werror -Wall -Wextra -std=c++98 -g

%.o: %.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

.PHONY: all clean fclean re

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
