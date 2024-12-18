
NAME =		libasm.a

CC =		nasm

FLAGS =		-f elf64 

SRCS = 		srcs/ft_strlen.s \
			srcs/ft_strcpy.s \
			srcs/ft_strcmp.s \
			srcs/ft_write.s \
			srcs/ft_read.s \
			srcs/ft_strdup.s

OBJS =		$(SRCS:.s=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJ)

%.o:		%.s
			$(CC) $(FLAGS)  $< -o $@

clean:
			@rm -rf $(OBJS)

fclean: 	clean
			@rm -rf $(NAME)

re: 		fclean all

.PHONY: 	all, $(NAME), clean, fclean, re
