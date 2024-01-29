# --- Nombre de la libreria --- #
NAME = libft.a
# --- Comando de compilado --- #
CC = gcc
# --- Flags de compilado --- #
CFLAGS = -Wall -Werror -Wextra

# <-- Archivos --> #
SRC_FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
			ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
			ft_atoi.c ft_calloc.c ft_strdup.c
SRC2_FILES = 
BONUS_FILES =

OBJS = $(SRC_FILES:.c=.o)

all:		$(NAME)
$(NAME):	$(OBJS)
		@echo "🔨Compilando..."
								$(cc) $(CFLAGS) -o $(NAME) $(OBJS)
								@echo "$(NAME) generado!🚀"

.PHONY : clean
clean:
	@echo "🗑 Eliminado!"
						rm -f *.o 
fclean:	clean
						rm -f $(NAME)
re:				fclean all
