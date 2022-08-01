CC = gcc
NAME     =     N27

CFLAGS += -I./include
CFLAGS += -W -Wall -Wextra -Werror 

SRC =	src/main.c\
		src/user.c\
		src/account.c\
		src/transac.c\
		

OBJ = $(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean 
	rm -f $(NAME)

.PHONY : clean fclean

re : fclean all