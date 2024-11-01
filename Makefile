# Variables
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

# Source files
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
      ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_toupper.c ft_tolower.c \
      ft_strlcpy.c ft_strchr.c ft_strlcat.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
      ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
      ft_strtrim.c ft_split.c
      

# Object files
OBJ = $(SRC:.c=.o) 

# Rules
all: $(NAME)

$(NAME): $(OBJ)
    $(AR) $(NAME) $(OBJ)

%.o: %.c libft.h
    $(CC) $(CFLAGS) -c $< -o $@

clean:
    $(RM) $(OBJ)

fclean: clean
    $(RM) $(    )

re: fclean all