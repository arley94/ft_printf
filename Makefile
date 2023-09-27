CC = cc
CFLAGS = -Wextra -Werror -Wall
INCLUDES = -I. -I./libft
LIBINCLUDES = -L./libft -L.
INC = $(INCLUDES) $(LIBINCLUDES)
LIBS = -lft -lftprintf
DEPS = libft/libft.h ftprintf.h
FILES = ft_printf

#B_FILES =

OBJ = $(FILES:%=%.o)

#B_OBJ = $(B_FILES:%=%.o)

#B_NAME = .bonus

NAME = libftprintf.a

$(NAME): $(OBJ)
	$(MAKE) -C libft
	ar -rc $@ $^

all: $(NAME)

test: main.c
	$(CC) -o $@ main.c $(CFLAGS) $(INC) $(LIBS)

#$(B_NAME): $(B_OBJ) $(OBJ)
#	ar -rc $(NAME) $^
#	ar -rc $(B_NAME) $^

#bonus: $(B_NAME)

clean:
	rm -f $(OBJ)
#	rm -f $(B_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

.PHONY: all bonus clean fclean re
