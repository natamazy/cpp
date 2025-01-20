NAME = AtLeastThisBeatsCoffeeMaking

HEADERS = 	AForm.hpp \
			Bureaucrat.hpp \
			RobotomyRequestForm.hpp \
			PresidentialPardonForm.hpp \
			ShrubberyCreationForm.hpp \
			Intern.hpp

SRCS = 		main.cpp \
			AForm.cpp \
			Bureaucrat.cpp \
			RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp \
			ShrubberyCreationForm.cpp \
			Intern.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re