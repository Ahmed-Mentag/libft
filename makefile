CC     = gcc
FLAGS  = -Wall -Wextra -Werror
SRC    = $(wildcard *.c)
OBJ    = $(SRC:.c=.o)
RM     = rm -rf
HEADER = $(wildcard *.h)
NAME   = bin

all : $(NAME)


$(NAME) : $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@echo "The program is created :)"

%.o : %.c
	@$(CC) $(FLAGS) -c $<

fclean : clean
	@$(RM) $(NAME)
	@echo "The program has been cleaned :("

clean : 
	@$(RM) $(OBJ)
	@echo "The object files have been cleaned :("

re : fclean all

.PHONY : all clean fclean re
