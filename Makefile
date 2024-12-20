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
	   ./ft_isalplha.c\
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
	
SRC_BONUS = ./ft_lstmap_bonus.c\
			./ft_lstnew_bonus.c\
			./ft_lstiter_bonus.c\
			./ft_lstlast_bonus.c\
			./ft_lstsize_bonus.c\
			./ft_lstclear_bonus.c\
			./ft_lstdelone_bonus.c\
			./ft_lstadd_back_bonus.c\
			./ft_lstadd_front_bonus.c\

OBJS = ${SRCS:.c=.o}

SRCSALL = ${SRCS} ${SRC_BONUS}

OBJSALL = ${SRCSALL:.c=.o}

LIB = libft.a

CC ?= clang

CFLAGS = -Wall -Werror -Wextra -I ./

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${LIB}:	${OBJS}
	ar -rsc ${LIB} ${OBJS}

all: 	${LIB}

bonus:	${OBJSALL}
	ar -rsc ${LIB} ${OBJSALL}
	

clean:	
		rm -f ${OBJS}

fclean:	clean;
		rm -f ${LIB}

re:	fclean all

.PHONY: all clean fclean re bonus
