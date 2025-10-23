
# ========== Variables ==========

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
SRCS = ft_bzero.c \
	ft_isdigit.c \
	ft_memset.c \
	ft_strlen.c	\
	ft_toupper.c \
	ft_isalnum.c \
	ft_isprint.c \
	ft_strchr.c \
	ft_strncmp.c \
	ft_isalpha.c \
	ft_memcpy.c \
	ft_strlcat.c \
	ft_strrchr.c \
	ft_isascii.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_tolower.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc \
	ft_strdup \
	ft_substr \
	ft_strjoin \
	ft_strtrim \
	ft_split \
	ft_itoa \
	ft_strmapi
OBJS = $(SRCS:.c=.o)


# ========== Rules ==========

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJS): libft.h

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re