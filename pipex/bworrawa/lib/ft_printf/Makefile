CC = cc

NAME = libftprintf.a

FLAGS		= -Wall -Wextra -Werror

AR			= ar rsc



HEADERS		= .

SOURCES		= ft_printf.c \
			ft_putchar.c \
			ft_putnbr.c \
			ft_putnbr_base.c \
			ft_putnbr.c \
			ft_putptr.c \
			ft_putstr.c \
			ft_strlen.c

OBJS		= $(SOURCES:.c=.o)

all:		$(NAME)
			@echo "\033[34mft_printf Compiled! 🎃\033[39m\\033[0m"

%.o:%.c		Makefile ft_printf.h
			$(CC) $(FLAGS) -c $< -o $@  -I $(HEADERS)  

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)

clean:		
			@echo "\033[34mPurging ft_printf .o files... 🎃\033[39m\\033[0m"
			rm -f $(OBJS)


fclean:		
			@echo "\033[34mPurging ft_printf files... 🎃\033[39m\\033[0m"
			rm -f $(OBJS) $(NAME) 

re: 		fclean all

.PHONY: all clean fclean re bonus