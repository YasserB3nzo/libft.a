# Variables
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Source files
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
      ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_toupper.c ft_tolower.c \
      ft_strlcpy.c ft_strchr.c ft_strlcat.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
      ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
      ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
      ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

# Object files
OBJ = $(SRC:.c=.o) 

# Rules
all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all

#auto variables:predefiend variables in make that adapt dynamicly with assigned value
#default rule is the first rule in make file 
#the purpose of the default rule here is to create libft
#the all is targer and the depedency is libft , make will check if libft is up to date if not 
#it will triger the rule that create and updt the libfta
# the $ symbole refers to the variable , and no reason for them to be upper case 
#make take the timeout into consedation when it comees to check if the libray is up to date or not 
#when a phony targed is declared make ignore the timeout and excutes the assosiete commandes