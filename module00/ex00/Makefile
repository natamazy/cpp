NAME = megaphone

CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CPP = c++ $(CPPFLAGS)

SOURCES = Megaphone.cpp
OBJECS = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECS)
	$(CPP) $^ -o $(NAME)

%.o: %.cpp Makefile
	$(CPP) -c $< -o $@

clean:
	rm -rf $(OBJECS)

fclean: clean
	rm -rf $(PROGRAM_NAME)

re: fclean all

.PHONY: all clean fclean re