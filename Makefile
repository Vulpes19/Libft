NAME = libft.a
FILES = ft_isdigit.c ft_isalnum.c ft_atoi.c ft_striteri.c ft_split.c ft_calloc.c ft_strjoin.c ft_strmapi.c\
 ft_isalpha.c ft_bzero.c ft_strlcat.c ft_isascii.c ft_isprint.c ft_strlcpy.c ft_strncmp.c ft_strdup.c ft_itoa.c\
  ft_memchr.c ft_memcmp.c ft_memmove.c ft_memcpy.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c\
   ft_strchr.c ft_strlen.c ft_strnstr.c ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c ft_strtrim.c
LST = ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_front_bonus.c\
 ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstclear_bonus.c ft_lstmap_bonus.c
OBJS = $(FILES:.c=.o)
LOBJS = $(LST:.c=.o)
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

all: $(NAME)

%.o: %.c
	cc $(CFLAGS) -c $< 
	$(AR) $(NAME) $@

$(NAME): $(OBJS)

bonus: 	$(NAME) $(LOBJS)

clean:
	rm -f $(OBJS) $(LOBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:all clean fclean re bonus
