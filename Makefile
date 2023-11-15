PRINT_F = ft_printf.c

OTHERS = ft_putcharrt.c ft_putnbrrt.c ft_putstrrt.c ft_putvoidpt.c

LFT = libft/

LIB = $(LFT)libft.a

HEAD = ./includes/

LFTSRC =	$(LFT)ft_putchar.c \
		$(LFT)ft_putstr.c \
		$(LFT)ft_isalpha.c \
		$(LFT)ft_isdigit.c \
		$(LFT)ft_isalnum.c \
		$(LFT)ft_isascii.c \
		$(LFT)ft_isprint.c \
		$(LFT)ft_toupper.c \
		$(LFT)ft_tolower.c \
		$(LFT)ft_atoi.c \
		$(LFT)ft_itoa.c \
		$(LFT)ft_strnew.c \
		$(LFT)ft_strdel.c \
		$(LFT)ft_strclr.c \
		$(LFT)ft_strdup.c \
		$(LFT)ft_strlen.c \
		$(LFT)ft_strcpy.c \
		$(LFT)ft_strncpy.c \
		$(LFT)ft_strcat.c \
		$(LFT)ft_strncat.c \
		$(LFT)ft_strlcat.c \
		$(LFT)ft_strchr.c \
		$(LFT)ft_strrchr.c \
		$(LFT)ft_strstr.c \
		$(LFT)ft_strnstr.c \
		$(LFT)ft_strcmp.c \
		$(LFT)ft_strncmp.c \
		$(LFT)ft_memset.c \
		$(LFT)ft_bzero.c \
		$(LFT)ft_memcpy.c \
		$(LFT)ft_memccpy.c \
		$(LFT)ft_memmove.c \
		$(LFT)ft_memchr.c \
		$(LFT)ft_memcmp.c \
		$(LFT)ft_memalloc.c \
		$(LFT)ft_memdel.c \
		$(LFT)ft_striter.c \
		$(LFT)ft_striteri.c \
		$(LFT)ft_strmap.c \
		$(LFT)ft_strmapi.c \
		$(LFT)ft_strequ.c \
		$(LFT)ft_strnequ.c \
		$(LFT)ft_strsub.c \
		$(LFT)ft_strjoin.c \
		$(LFT)ft_strtrim.c \
		$(LFT)ft_strsplit.c \
		$(LFT)ft_putendl.c \
		$(LFT)ft_putnbr.c \
		$(LFT)ft_putchar_fd.c \
		$(LFT)ft_putstr_fd.c \
		$(LFT)ft_putendl_fd.c \
		$(LFT)ft_putnbr_fd.c \
		$(LFT)ft_lstnew.c \
		$(LFT)ft_lstdelone.c \
		$(LFT)ft_lstdel.c \
		$(LFT)ft_lstadd.c \
		$(LFT)ft_lstiter.c \
		$(LFT)ft_lstmap.c \
		$(LFT)ft_isupper.c \
		$(LFT)ft_islower.c \
		$(LFT)get_next_line.c \

LFTOBJ = $(LFTSRC:.c=.o)

SRCS = ${PRINT_F} ${OTHERS}

${OBJS}: ${SRCS:.c=.o}

AR = 	ar rsc

RLIB = ranlib

LFLAG = -L $(LFT) -lft

NAME = libftprintf.a

NAMELFT = libft.a

CFLAGS = -Wall -Wextra -Werror

CC = gcc

.c.o:
		$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

$(NAME):	$(OBJS)
		$(AR) $(NAME) $(OBJS)

all:	${NAME}

clean:
		rm -f ${OBJS}

fclean:	clean;
		rm -f ${NAME} ${NAMELFT}

re:	fclean all

.PHONY: all clean fclean re bonus

