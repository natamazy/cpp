NAME = nowItsWeird

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 #-g3 -fsanitize=address
CPP = c++ $(CPPFLAGS)

SOURCES =	main.cpp \
			ScavTrap.cpp \
			ClapTrap.cpp \
			FragTrap.cpp \
			DiamondTrap.cpp

OBJECS = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECS)
	$(CPP) $^ -o $(NAME) -I.

%.o: %.cpp Makefile
	$(CPP) -c $< -o $@

clean:
	rm -rf $(OBJECS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
