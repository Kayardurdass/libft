SRCS = ./ft_bzero.c\
	   ./ft_strlcpy.c\
	   ./ft_strlcat.c\
	   ./ft_strchr.c\
	   ./ft_strlen.c\
	   ./ft_tolower.c\
	   ./ft_strncmp.c\
	   ./ft_toupper.c\
	   ./ft_memset.c\
	   ./ft_memcpy.c\
	   ./ft_isalpha.c\
	   ./ft_isalnum.c\
	   ./ft_memmove.c\
	   ./ft_isascii.c\
	   ./ft_isprint.c\
	   ./ft_isdigit.c\
	   ./ft_strnstr.c\
	   ./ft_strchr.c\
	   ./ft_strrchr.c\
	   ./ft_memchr.c\
	   ./ft_memcmp.c\
	   ./ft_atoi.c\
	   ./ft_calloc.c\
	   ./ft_strdup.c\
	   ./ft_strndup.c\
	   ./ft_substr.c\
	   ./ft_strjoin.c\
	   ./ft_strtrim.c\
	   ./ft_split.c\
	   ./ft_itoa.c\
	   ./ft_strmapi.c\
	   ./ft_striteri.c\
	   ./ft_putstr_fd.c\
	   ./ft_putchar_fd.c\
	   ./ft_putendl_fd.c\
	   ./ft_putnbr_fd.c\
	   ./ft_putnbr_base_fd.c\
	   ./ft_printf.c\
	   ./get_next_line.c\
	
SRC_BONUS = ./ft_lstmap.c\
			./ft_lstnew.c\
			./ft_lstiter.c\
			./ft_lstlast.c\
			./ft_lstsize.c\
			./ft_lstclear.c\
			./ft_lstdelone.c\
			./ft_lstadd_back.c\
			./ft_lstadd_front.c\

OBJS = ${SRCS:.c=.o}
SRCSALL = ${SRCS} ${SRC_BONUS}
OBJSALL = ${SRCSALL:.c=.o}

YELLOW = \x1B[33m
GREEN = \x1B[32m
CYAN = \x1B[36m
RESET = \x1B[0m

NAME = libft.a
CC = cc

CFLAGS = -Wall -Werror -Wextra

.c.o:
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	@echo "Building libft..."
	@ar -rsc ${NAME} ${OBJS}
	@echo "Finished!"

all: 	${NAME}

bonus:	${OBJSALL}
	@ar -rsc ${NAME} ${OBJSALL}

clean:	
	@echo "Cleaning up..."
	@rm -f ${OBJS}

fclean:	clean
	@rm -f ${NAME}

re:	fclean ${NAME}

.PHONY: all clean fclean re bonus
