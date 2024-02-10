# --- Nombre de la libreria --- #
NAME = libft.a
# --- Comando de compilado --- #
CC = gcc
# --- Flags de compilado --- #
CFLAGS = -Wall -Werror -Wextra
HEADER = libft.h
AR = ar -rcs
# <-- Archivos --> #
SRC_FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
			ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
			ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
			ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c
OBJS = $(SRC_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	@echo "$@ generado!🚀"

%.o: %.c $(HEADER) Makefile
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "🔨Compilando..."

clean:
	@echo "🗑 Eliminado!"
	rm -f *.o 
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all re clean fclean
