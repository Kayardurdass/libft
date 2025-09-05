# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uanglade <uanglade@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/05 06:07:32 by uanglade          #+#    #+#              #
#    Updated: 2025/09/05 06:20:36 by uanglade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
LIBFT_PATH = libft
CC = gcc
INC = .
##begin: SRC
SRC = src/ft_atoi.c src/ft_bzero.c src/ft_calloc.c src/ft_isalnum.c \
	src/ft_isalpha.c src/ft_isascii.c src/ft_isdigit.c src/ft_isprint.c \
	src/ft_itoa.c src/ft_lstadd_back.c src/ft_lstadd_front.c \
	src/ft_lstclear.c src/ft_lstdelone.c src/ft_lstiter.c src/ft_lstlast.c \
	src/ft_lstmap.c src/ft_lstnew.c src/ft_lstsize.c src/ft_memchr.c \
	src/ft_memcmp.c src/ft_memcpy.c src/ft_memmove.c src/ft_memset.c \
	src/ft_printf.c src/ft_putchar.c src/ft_putendl.c src/ft_putnbr.c \
	src/ft_putnbr_base.c src/ft_putstr.c src/ft_split.c src/ft_strchr.c \
	src/ft_strdup.c src/ft_striteri.c src/ft_strjoin.c src/ft_strlcat.c \
	src/ft_strlcpy.c src/ft_strlen.c src/ft_strmapi.c src/ft_strncmp.c \
	src/ft_strndup.c src/ft_strnstr.c src/ft_strrchr.c src/ft_strtrim.c \
	src/ft_substr.c src/ft_tolower.c src/ft_toupper.c src/get_next_line.c
##end: SRC

OBJ = $(SRC:%.c=%.o)
DEPS = $(SRC:%.c=%.d)
CFLAGS += -Wall -Wextra -Werror
INCFLAGS = $(INC:%=-I%)
DEPSFLAGS = -MT '$*.o $*.d' -MMD -MP -MF $*.d

.PHONY: all
all: $(NAME)

$(NAME): $(OBJ)
	ar rcsD $@ $?

%.o: %.c %.d
	$(CC) $(DEPSFLAGS) $(CFLAGS) $(INCFLAGS) -o $@ -c $<
	@touch -c $@

.PHONY: clean
clean:
	rm $(OBJ)

.PHONY: dclean
dclean:
	rm $(DEPS)

.PHONY: fclean
fclean: clean dclean
	rm $(NAME)

.PHONY: re
re: fclean all

.PHONY: deps
deps: $(DEPS)

$(DEPS):

-include $(DEPS)


$(DEPS): %.d: %.c
	$(CC) $(DEPSFLAGS) -DLIBFT_INTERNAL $(INC:%=-I%) -E -o /dev/null $<


.PHONY: update-src
update-src:
	export LC_ALL=C; \
	lines="##begin: SRC\n"; \
	current="SRC ="; \
	tmp=$$(mktemp); \
	find -type f -name '*.c' -printf '%P\n' | sort > $$tmp; \
	while IFS= read -r f; do \
		git check-ignore -q "$${f}" && continue; \
		if [ $$(echo "$${current} $${f} \\\\\n" | wc -c) -ge 80 ]; then \
			lines="$${lines}$${current} \\\\\n"; \
			current="\t$${f}"; \
		else \
			current="$${current} $${f}"; \
		fi; \
	done < $$tmp; \
	rm -f $$tmp; \
	lines="$${lines}$${current}\n##end: SRC"; \
	sed -i "/^##begin: SRC$$/,/^##end: SRC$$/c\\$$lines" Makefile

.PHONY: norm
norm:
	@norminette $(SRC)
