
NAME = animal

SRCS = Animal.cpp main.cpp Cat.cpp Dog.cpp Brain.cpp
OBJS = $(SRCS:.cpp=.o)
DOBJS = $(OBJS:.o=.d)

CC = c++

CFLAGS = -Werror -Wall -Wextra -std=c++98 -MD -g


%.o: %.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

-include *.d

.PHONY: all clean fclean re color

all: $(NAME)

clean:
	rm -f $(OBJS) $(DOBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
