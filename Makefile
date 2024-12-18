
NAME =		libasm.a

CC =		nasm

FLAGS =		-felf64 

SRCS = 			ft_strlen.s \
			ft_strcpy.s \
			ft_strcmp.s \
			ft_write.s \
			ft_read.s \
			ft_strdup.s

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
