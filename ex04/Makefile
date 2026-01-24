NAME = Sed_is_for_losers
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -g
CXX = c++

SRCS = main.cpp Sed.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re