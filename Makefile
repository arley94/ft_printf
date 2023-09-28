CC = cc
CFLAGS = -Wextra -Werror -Wall
INCLUDES = -I. -I./libft
LIBS = -L. -lftprintf -L./libft -lft
DEPS = libft/libft.h ftprintf.h
FILES = ft_printf \
					ft_putnbr_base


#B_FILES =

OBJ = $(FILES:%=%.o)

#B_OBJ = $(B_FILES:%=%.o)

#B_NAME = .bonus

NAME = libftprintf.a

$(NAME): $(OBJ)
	cd libft && $(MAKE) && $(MAKE) clean
	ar -rc $@ $^

all: $(NAME)

test: $(NAME) main.c
	$(CC) -o $@ main.c $(CFLAGS) $(INCLUDES) $(LIBS)

#$(B_NAME): $(B_OBJ) $(OBJ)
#	ar -rc $(NAME) $^
#	ar -rc $(B_NAME) $^

#bonus: $(B_NAME)

clean:
	rm -f $(OBJ) test
#	rm -f $(B_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

.PHONY: all bonus clean fclean re
