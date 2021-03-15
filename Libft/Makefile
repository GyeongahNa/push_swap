CC		= gcc
INC		= -I ./
CFLAGS	= -Wall -Wextra -Werror $(INC)

SRCS	= ./ft_atoi.c ./ft_lstnew.c ./ft_lstadd_front.c ./ft_lstsize.c ./ft_lstlast.c\
		./ft_lstadd_back.c ./ft_lstdelone.c ./ft_lstclear.c ./ft_lstiter.c\
		./ft_strlen.c ./ft_strcmp.c ./ft_strncmp.c ./ft_lstdel_back.c ./ft_lstdel_front.c\
		./ft_itoa.c ./ft_puts.c ./ft_split.c

OBJS	= $(SRCS:.c=.o)

NAME	= libft.a

all : $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

clean :
	rm -f $(OBJS) $(BOBJS)

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)
