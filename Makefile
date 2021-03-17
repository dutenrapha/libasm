NAME = libasm
SRC = $(notdir $(wildcard ./*.s))
OBJ=$(addprefix ./, $(SRC:.s=.o))

all: $(NAME)

$(NAME): $(OBJ)
	@gcc -c main.c -o main.o
	@gcc $(OBJ) main.o -o $@ -no-pie

%.o:	%.s
	@nasm $< -f elf64
clean:
	@rm -f *.o

fclean:	clean
	@rm -f $(NAME)

re: fclean all
