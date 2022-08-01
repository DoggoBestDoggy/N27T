##
## RUNNER PROJECT, 23/05/2022 by rigoni_j
## File description:
##      makefile
##

NAME =     N27

SRC    =    src/main.c\
			src/user.c\
			

CC =     gcc

OBJ =     $(SRC:.c=.o)

CFLAGS +=     -Wall -Wextra -Werror
CFLAGS +=     -I./include

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS) 

all: $(NAME)

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean