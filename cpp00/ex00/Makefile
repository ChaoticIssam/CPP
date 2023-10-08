NAME = megaphone
CC = c++
RM = rm -f
CFLAG = -Wall -Wextra -Werror

all: $(NAME)
$(NAME): $(NAME).cpp
			$(CC) $(CFLAG) -o $(NAME) $(NAME).cpp

clean:
		$(RM) $(NAME).o
fclean: clean
		$(RM) $(NAME)
re:	fclean all
