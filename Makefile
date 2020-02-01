NAME = libasm.a

OBJS = 	mac_os/ft_strcmp.o \
	mac_os/ft_strcpy.o \
	mac_os/ft_strlen.o \
	mac_os/ft_write.o \
	mac_os/ft_read.o \
	mac_os/ft_strdup.o \

$(NAME):
	nasm -fmacho64 mac_os/ft_strlen.s
	nasm -fmacho64 mac_os/ft_strcpy.s
	nasm -fmacho64 mac_os/ft_strcmp.s
	nasm -fmacho64 mac_os/ft_write.s
	nasm -fmacho64 mac_os/ft_read.s
	nasm -fmacho64 mac_os/ft_strdup.s
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)

re: fclean all

t:
	gcc -L./ -lasm tests/*.c main.c
