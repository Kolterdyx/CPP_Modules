
NAME = identify

SRCS = main.cpp Base.cpp A.cpp B.cpp C.cpp

OBJS = $(addprefix obj/, $(SRCS:.cpp=.o))

CC = g++

CFLAGS = -Wall -Wextra -Werror -MD -g -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

obj/%.o: %.cpp
	@mkdir -p obj
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
