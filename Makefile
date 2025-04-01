SRCS =./src/ft_bzero.c\
	  ./src/ft_strlcpy.c\
	  ./src/ft_strlcat.c\
	  ./src/ft_strchr.c\
	  ./src/ft_strlen.c\
	  ./src/ft_tolower.c\
	  ./src/ft_strncmp.c\
	  ./src/ft_toupper.c\
	  ./src/ft_memset.c\
	  ./src/ft_memcpy.c\
	  ./src/ft_isalpha.c\
	  ./src/ft_isalnum.c\
	  ./src/ft_memmove.c\
	  ./src/ft_isascii.c\
	  ./src/ft_isprint.c\
	  ./src/ft_isdigit.c\
	  ./src/ft_strnstr.c\
	  ./src/ft_strchr.c\
	  ./src/ft_strrchr.c\
	  ./src/ft_memchr.c\
	  ./src/ft_memcmp.c\
	  ./src/ft_atoi.c\
	  ./src/ft_calloc.c\
	  ./src/ft_strdup.c\
	  ./src/ft_strndup.c\
	  ./src/ft_substr.c\
	  ./src/ft_strjoin.c\
	  ./src/ft_strtrim.c\
	  ./src/ft_split.c\
	  ./src/ft_itoa.c\
	  ./src/ft_strmapi.c\
	  ./src/ft_striteri.c\
	  ./src/ft_putstr.c\
	  ./src/ft_putchar.c\
	  ./src/ft_putendl.c\
	  ./src/ft_putnbr.c\
	  ./src/ft_putnbr_base.c\
	  ./src/ft_printf.c\
	  ./src/get_next_line.c\
		./src/ft_lstmap.c\
		./src/ft_lstnew.c\
		./src/ft_lstiter.c\
		./src/ft_lstlast.c\
		./src/ft_lstsize.c\
		./src/ft_lstclear.c\
		./src/ft_lstdelone.c\
		./src/ft_lstadd_back.c\
		./src/ft_lstadd_front.c\

OBJS = ${SRCS:./src/%.c=./obj/%.o}
SRCSALL = ${SRCS} ${SRC_BONUS}
OBJSALL = ${SRCSALL:.c=.o}

#YELLOW = \x1B[33m
#GREEN = \x1B[32m
#CYAN = \x1B[36m
#RESET = \x1B[0m
#RED = \x1B[31m

NAME = libft.a
CC = cc

CFLAGS = -Wall -Werror -Wextra
INCLUDE = -I./include/


norm:
	@norminette $(SRCS) > /dev/null && echo "$(GREEN)Norminette: OK$(RESET)" || ( echo "$(RED)Norminette: KO" && norminette $(SRCS) | cat)

./obj/%.o: ./src/%.c | ./obj
	@${CC} ${CFLAGS} ${INCLUDE} -c $< -o $@

${NAME}: ${OBJS}
	@cat .title | python .lolcat
	@echo "$(YELLOW)Executing norminette on src$(RESET)"
	@make -s norm
	@echo "$(GREEN)Building libft..."
	@ar -rsc ${NAME} ${OBJS}
	@echo "Finished!"

all: 	${NAME}

clean:	
	@echo "Cleaning up..."
	@rm -f ${OBJS}

fclean:	clean
	@rm -f ${NAME}

re:	fclean ${NAME}

.PHONY: all clean fclean re
