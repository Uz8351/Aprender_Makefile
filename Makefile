 
##*********************************
## mail   <mininoxeixo28@gmail.com>
## Iniciado   lun 08 ago 2022 18∶08∶52
## Finalizado lun 08 ago 2022 19∶08∶52  
## ************************************
##

SRC	= src/main.c \
	src/utilidades/Mi_Proyecto.c \
	src/utilidades/Volcado.c \
	
    
OBJ	= $(SRC:.c=.o)

NAME	= Subo_a_Memoria

RM	= rm -f

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror
CFLAGS	+= -pedantic-errors
CFLAGS	+= -I./include

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
