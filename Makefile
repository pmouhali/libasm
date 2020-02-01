NAME = libasm.a

FLAGS = -Wall -Wextra -Werror

OBJS = 	mac_os/ft_strcmp.o \
	mac_os/ft_strcpy.o \
	mac_os/ft_strlen.o \
	mac_os/ft_write.o \
	mac_os/ft_read.o \

$(NAME):
	nasm -fmacho64 mac_os/ft_strlen.s
	nasm -fmacho64 mac_os/ft_strcpy.s
	nasm -fmacho64 mac_os/ft_strcmp.s
	nasm -fmacho64 mac_os/ft_write.s
	nasm -fmacho64 mac_os/ft_read.s
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)

re: fclean all

test:
	gcc $(FLAGS) -L./ -lasm main.c
