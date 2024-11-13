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

OBJS = ${SRCS:.c=.o}

OBJSALL = ${SRCSALL:.c=.o} 

LIB = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra -I ./

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${LIB}:	${OBJS}
		ar -rsc ${LIB} ${OBJS}

all: 	${LIB}

clean:	
		rm -f ${OBJS}

fclean:	clean;
		rm -f ${LIB}

re:	fclean all

.PHONY: all clean fclean re
