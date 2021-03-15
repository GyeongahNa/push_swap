CC		= gcc
INC		= -I ./
CFLAGS	= -Wall -Wextra -Werror $(INC)
SRCS	= ./get_next_line.c ./get_next_line_utils.c

OBJS	= $(SRCS:.c=.o)

NAME	= Libget_next_line.a

all : $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

clean :
	rm -f $(OBJS) $(BOBJS)

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)
