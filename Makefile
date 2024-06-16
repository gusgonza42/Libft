# <-- Library's Name --> #
NAME = libft.a

# <-- Compilation Command --> #
CC = gcc

# <-- Compilation Flags --> #
CFLAGS = -Wall -Werror -Wextra

# <-- Remove Command -->#
RM = rm -f

# <-- HEADER --> #
HEADER = libft.h

# <-- MAKEFILE --> #
MAKEFILE = Makefile

# <-- AR --> #
AR = ar -rcs

# <-- Files --> #
SRC_FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
			ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
			ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
			ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c ft_strtrim.c ft_split.c ft_itoa.c

# <-- Bonus Objects --> #
SRC_FILES_BONUS = ft_lstnew_bonus.c

# <-- Bonus Objects --> #
OBJS_BONUS = $(SRC_FILES_BONUS:.c=.o)

# <-- Objects --> #
OBJS = $(SRC_FILES:.c=.o)

# <-- Main Target --> #
all: $(NAME)

# <--Library Creation--> #
$(NAME): $(OBJS)
	@echo "✅ 🚀 0bjects created successfully!"
	@$(AR) $@ $(OBJS)
	@echo "✅ 🛰  $(NAME) created successfully!"

# <-- Objects Creation --> #
%.o: %.c $(HEADER) $(MAKEFILE)
	@echo "🧩 ☁️  Compiling... $<..."
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "🔨 🦔 $@ created!"

# <-- Objects Destruction --> #
clean:
	@$(RM) $(OBJS) $(OBJS_BONUS)
	@echo "🗑️  🚀 Objects destroyed successfully!"

# <-- Clean Execution + libft.a Destruction --> #
fclean: clean
	@$(RM) $(NAME)
	@echo "🗑️  🛰  $(NAME) destroyed successfully!"

bonus: $(OBJS_BONUS)
	@echo "✅ 🚀 0bjects Bonus created successfully!"
	@$(AR) $(NAME) $(OBJS_BONUS)
	@echo "✅ 🛰 $(NAME) <-- Bonus created successfully!"

# <-- Fclean Execution -->
re: fclean all bonus

# <-- Targets Declaration --> #
.PHONY : all clean fclean bonus re
