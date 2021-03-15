NAME_CH =        checker
NAME_PS =		push_swap
NAME_PS =		push_swap
NAME_RAND = 	random
LIB     =        Libft
GNL		= 		get_next_line
CHECK_DIR =		src_checker
PUSH_SWAP_DIR =		src_push_swap


CHECK_SRC		= ./$(CHECK_DIR)/checker.c ./$(CHECK_DIR)/sa.c ./$(CHECK_DIR)/sb.c ./$(CHECK_DIR)/ss.c ./$(CHECK_DIR)/pa.c ./$(CHECK_DIR)/pb.c ./$(CHECK_DIR)/ra.c ./$(CHECK_DIR)/rb.c ./$(CHECK_DIR)/rr.c ./$(CHECK_DIR)/rra.c ./$(CHECK_DIR)/rrb.c ./$(CHECK_DIR)/rrr.c \
			./$(CHECK_DIR)/print_stack.c ./$(CHECK_DIR)/call_command.c ./$(CHECK_DIR)/check_descending.c ./$(CHECK_DIR)/check_argv.c
PUSH_SWAP_SRCS  =   ./$(PUSH_SWAP_DIR)/get_value_in_lst.c ./$(CHECK_DIR)/check_descending.c ./$(PUSH_SWAP_DIR)/main.c ./$(PUSH_SWAP_DIR)/find_chunk.c  ./$(PUSH_SWAP_DIR)/get_idx_in_lst.c  ./$(PUSH_SWAP_DIR)/print_commands.c  ./$(PUSH_SWAP_DIR)/push_swap.c ./$(CHECK_DIR)/sa.c ./$(CHECK_DIR)/sb.c ./$(CHECK_DIR)/ss.c ./$(CHECK_DIR)/pa.c\
					 ./$(CHECK_DIR)/pb.c ./$(CHECK_DIR)/ra.c ./$(CHECK_DIR)/rb.c ./$(CHECK_DIR)/rr.c ./$(CHECK_DIR)/rra.c ./$(CHECK_DIR)/rrb.c ./$(CHECK_DIR)/rrr.c ./$(CHECK_DIR)/check_argv.c\
					 ./$(PUSH_SWAP_DIR)/check_little_number.c ./$(PUSH_SWAP_DIR)/check_four.c ./$(PUSH_SWAP_DIR)/check_threefive.c ./$(PUSH_SWAP_DIR)/get_chunk.c 
RAND_SRCS =			./random_gen/main.c

INC_DIR = ./
OBJ_CH  = $(CHECK_SRC:.c=.o)
OBJ_PS  = $(PUSH_SWAP_SRCS:.c=.o)
OBJ_RAND  = $(RAND_SRCS:.c=.o)
CC			= gcc
CFLAGS	= -Wall -Wextra -Werror -fsanitize=address -I. 
OPTIONS = -I$(INC_DIR) -I./Libft -I./get_next_line -lft -L./Libft -lget_next_line -L./get_next_line

all:     $(LIB) $(GNL) $(NAME_CH) $(NAME_PS)

$(LIB): relib cleanlib

$(GNL): regnl cleangnl

$(NAME_CH):  $(LIB) $(GNL) $(OBJ_CH)
					${CC} ${CFLAGS} -o ${NAME_CH} ${OPTIONS} ${OBJ_CH}

$(NAME_PS):  $(LIB) $(GNL) $(OBJ_PS)
					${CC} ${CFLAGS} -o ${NAME_PS} ${OPTIONS} ${OBJ_PS}

$(NAME_RAND): $(LIB) $(GNL) $(OBJ_RAND)
					${CC} ${CFLAGS} -o ${NAME_RAND} ${OPTIONS} ${OBJ_RAND}

clean:    cleanlib cleangnl
					rm -rf $(OBJ_CH) $(OBJ_PS)

fclean:   clean fcleanlib fcleangnl
					rm -rf $(NAME_CH) $(NAME_PS)

re:       fclean all

relib:
	@$(MAKE) -C ./Libft re

cleanlib:
	@$(MAKE) -C ./Libft clean

fcleanlib: cleanlib
	@$(MAKE) -C ./Libft fclean

regnl:
	@$(MAKE) -C ./get_next_line re

cleangnl:
	@$(MAKE) -C ./get_next_line clean

fcleangnl: cleangnl
	@$(MAKE) -C ./get_next_line fclean