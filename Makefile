NAME = libasm.a

FLAGS = -Wall -Wextra -Werror

OBJS = 	macosver/ft_strcmp.o \
	macosver/ft_strcpy.o \
	macosver/ft_strlen.o \

$(NAME):
	nasm -fmacho64 macosver/ft_strlen.s
	nasm -fmacho64 macosver/ft_strcpy.s
	nasm -fmacho64 macosver/ft_strcmp.s
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)

re: fclean all

test:
	gcc -L./ -lasm main.c
