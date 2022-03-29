NAME = push_swap

BONUS = checker

CFLAGS = -Wall -Werror -Wextra

RM = rm -rf

CC = gcc

AR = ar rcs

FUNCTIONS =	linkedlist_utils/ft_newnode.c\
			linkedlist_utils/ft_nodesize.c\
			linkedlist_utils/ft_lastlist.c\
			linkedlist_utils/ft_display.c\
			linkedlist_utils/ft_addtofront.c\
			linkedlist_utils/ft_addtoback.c\
			linkedlist_utils/ft_stackfill.c\
			linkedlist_utils/ft_freelist.c\
			get_next_line.c\
			get_next_line_utils.c\
			actions/swap_b.c\
            actions/swap_a.c\
            actions/swap_a_b.c\
            actions/push_a.c\
            actions/push_b.c\
            actions/rotate_a.c\
            actions/rotate_b.c\
            actions/rotate_a_b.c\
            actions/reverse_rotate_a.c\
            actions/reverse_rotate_b.c\
            actions/reverse_rotate_a_b.c\
			linkedlist_utils/ft_atoi.c\
			linkedlist_utils/ft_strcmp.c\
			linkedlist_utils/ft_strlen.c\
			ft_printf.c\
			ft_putnbr.c\
			ft_putstr.c\
			get_index.c\
			convert_linkedlist.c\
			selecting_sort.c\
			find_max_min.c\
			sort_three.c\
			sort_five.c\
			sort_fivehundred.c\
			sort_hundred.c\
			least_moves_from_a.c\
			least_moves_from_b.c\
			push_nums_to_b.c\
			sort_less_than_hundred.c\
			sort_two.c\
			check_sorted.c\
			
OBJECTS =	$(FUNCTIONS:.c=.o)

all : $(NAME)

BONUS : $(BONUS)

$(NAME) :	$(OBJECTS)
			$(CC) $(CFLAGS) $(OBJECTS) main.c -o $(NAME) 
			@echo "PUSH_SWAP CREATED"

$(BONUS) :	$(OBJECTS)
			$(CC) $(CFLAGS) $(OBJECTS) checker.c -o $(BONUS) 
			@echo "CHECKER CREATED"

clean :
			$(RM)	$(OBJECTS)
	
fclean : clean
			$(RM) $(NAME) $(BONUS)
			@echo "PUSH_SWAP DESTROYED"

re : fclean all
