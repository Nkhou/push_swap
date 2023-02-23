NAME = push_swap
NAME_BONUS = checker
CC = cc
CFLAGS =  -I./inc/ -Wall -Wextra -Werror
FILES = 		src/chunk.c\
				src/instructions/pa.c\
				src/instructions/pb.c\
				src/instructions/push.c\
				src/instructions/ra.c\
				src/instructions/rb.c\
				src/instructions/reverse_rotate.c\
				src/instructions/rotate.c\
				src/instructions/rr.c\
				src/instructions/rra.c\
				src/instructions/rrb.c\
				src/instructions/rrr.c\
				src/instructions/sa.c\
				src/instructions/sb.c\
				src/instructions/ss.c\
				src/instructions/swap.c\
				src/list/free_ss.c\
				src/list/ft_lst_clear.c\
				src/list/ft_lstadd_back_bonus.c\
				src/list/ft_lstaddfront.c\
				src/list/ft_lstdelone.c\
				src/list/ft_lstlast.c\
				src/list/ft_lstnew_bonus.c\
				src/list/ft_lstsize.c\
				src/partition/divide.c\
				src/partition/ft_for_element.c\
				src/partition/ft_isnum.c\
				src/partition/ft_isrepeat.c\
				src/partition/ft_tries.c\
				src/partition/law_five.c\
				src/str/addpos.c\
 				src/str/check.c\
				src/str/dis.c\
				src/str/ft_atoi.c\
				src/str/ft_bzero.c\
				src/str/ft_calloc.c\
				src/str/ft_isalpha.c\
				src/str/ft_isdigit.c\
				src/str/ft_split.c\
				src/str/ft_strdup.c\
				src/str/ft_strjoin.c\
				src/str/ft_strlen.c\
				src/str/is_top.c\
				src/str/push_to_a.c\
				src/str/put_in_stac.c\
				src/str/ft_putstr.c\
				src/str/take2top.c\
				src/swap_a.c\

FILES_BONUS = 	bonus/main.c\
				bonus/get_next_line/get_next_line.c\
				bonus/get_next_line/get_next_line_utils.c\
				bonus/instructions/pa.c\
				bonus/instructions/pb.c\
				bonus/instructions/push.c\
				bonus/instructions/ra.c\
				bonus/instructions/rb.c\
				bonus/instructions/reverse_rotate.c\
				bonus/instructions/rotate.c\
				bonus/instructions/rr.c\
				bonus/instructions/rra.c\
				bonus/instructions/rrb.c\
				bonus/instructions/rrr.c\
				bonus/instructions/sa.c\
				bonus/instructions/sb.c\
				bonus/instructions/ss.c\
				bonus/instructions/swap.c\
				bonus/list/free_ss.c\
				bonus/list/ft_lst_clear.c\
				bonus/list/ft_lstadd_back_bonus.c\
				bonus/list/ft_lstaddfront.c\
				bonus/list/ft_lstdelone.c\
				bonus/list/ft_lstlast.c\
				bonus/list/lstlast.c\
				bonus/list/ft_lstnew_bonus.c\
				bonus/list/ft_lstsize.c\
				bonus/list/ft_lstnew.c\
				bonus/list/lst_add_back.c\
				bonus/src/check.c\
				bonus/src/ft_atoi.c\
				bonus/src/ft_bzero.c\
				bonus/src/ft_calloc.c\
				bonus/src/ft_isalpha.c\
				bonus/src/ft_isrepeat.c\
				bonus/src/ft_isdigit.c\
				bonus/src/ft_split.c\
				bonus/src/ft_strdup.c\
				bonus/src/ft_strjoin.c\
				bonus/src/ft_strlen.c\
				bonus/src/ft_isnum.c\
				bonus/src/put_in_stac.c\
				bonus/src/ft_putstr.c\
				bonus/src/ft_strcmp.c\
				bonus/src/take_instra.c\

OBJ = $(FILES:.c=.o)
OBJ_BONUS = $(FILES_BONUS:.c=.o)

all: $(NAME)
bonus: $(NAME_BONUS)
$(NAME): $(OBJ) 
	$(CC) $(OBJ) -o $@ -g
$(NAME_BONUS): $(OBJ_BONUS)
	$(CC) $(OBJ_BONUS) -o $@ -g

%.o: src/%.c inc/push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@
%.o: bonus/%.c inc/checker.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME) $(NAME_BONUS)

re: fclean all

.PHONY: fclean clean all re bonus
