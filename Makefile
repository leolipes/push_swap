SRCS		= src/main.c \
			  src/get_stack.c \
			  src/stack_a.c \
			  src/stack_b.c \
			  src/check_valid_input.c \
			  src/check_is_sorted.c \
			  src/utils.c \
			  src/simplify_stack.c \
			  src/radix_sort.c \
			  src/get_index.c \
			  src/b_to_a.c \
			  src/check_duplicate.c \
			  src/free_stack.c \
			  src/sort_small_stack.c \

SRCS_PRINTF = printf/ft_hexa_and_pointer.c \
			  printf/ft_printf.c \
			  printf/ft_printf_utils.c

OBJS		= ${SRCS:%.c=$(OBJS_DIR)%.o}

OBJS_DIR	= objects/

OBJS_PRINTF = ${SRCS_PRINTF:.c=.o}

NAME		= push_swap

WFLAGS		= -Wall -Werror -Wextra

CC			= cc

RM			= rm -rf

$(OBJS_DIR)%.o: %.c
			@mkdir -p $(dir $@)
			@$(CC) $(CFLAGS) -c $< -o $@ -I include

all: $(NAME)

$(NAME): ${OBJS_PRINTF} $(OBJS)
			@$(CC) $(OBJS) ${OBJS_PRINTF} -o $(NAME)

clean:
			@$(RM) $(OBJS_DIR)

fclean: clean
			@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re