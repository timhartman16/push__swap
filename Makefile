SRCS		= push_swap.c additional_functions.c sort_three.c ft_split.c \
				sort_five.c sort_algorithm.c ft_errors.c additional_functions_two.c \
				game_rules.c game_rules_two.c game_rules_three.c
SRCS_H 		= push_swap.h
OBJS		= $(SRCS:.c=.o)
CC			= gcc
RM			= rm -rf
NAME		= push_swap

all:	$(NAME)

$(NAME):	$(OBJS) $(SRCS_H) Makefile
			${CC} -g -o ${NAME} ${OBJS} -I

clean:
			${RM} ${OBJS}

fclean: clean
			${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re