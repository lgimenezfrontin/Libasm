
NAME =		libasm.a

CC =		nasm

FLAGS =		-felf64 

SRCS = 		srcs/ft_strlen.s \
			srcs/ft_strcpy.s \
			srcs/ft_strcmp.s \
			srcs/ft_write.s \
			srcs/ft_read.s \
			srcs/ft_strdup.s

OBJS =		$(SRCS:.s=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

%.o:		%.s
			$(CC) $(FLAGS)  $< -o $@

clean:
			@rm -rf $(OBJS)

fclean: 	clean
			@rm -rf $(NAME)

re: 		fclean all

.PHONY: 	all, $(NAME), clean, fclean, re
