NAME		= pipex
NAME_BONUS	= pipex_bonus

CC			= cc
FLAGS		= -Wall -Werror -Wextra -g3 -O0 
NOT_USING 	= -fsanitize=address


LIB_DIR		= ./lib
LIBFT_DIR	= libft
LIBFT		= $(LIBFT_DIR)/libft.a
FTPRINTF_DIR = ft_printf
FTPRINTF 	= $(FTPRINTF_DIR)/libftprintf.a


SRCS		= pipex.c \
		pipex_utils.c \
		pipex_utils2.c \
		file_utils.c \
		str_utils.c \

BONUS_SRCS	= pipex_bonus.c \
		pipex_utils.c \
		pipex_utils2.c \
		file_utils.c \
		str_utils.c \
		bonus_utils.c \
		heredoc.c


HEADERS 	= -I . -I ${LIB_DIR}/${LIBFT_DIR} -I ${LIB_DIR}/${FTPRINTF_DIR} 

LIBS		= ${LIB_DIR}/${FTPRINTF} ${LIB_DIR}/${LIBFT} 

OBJ_FILES	= $(SRCS:.c=.o)

BONUS_OBJS	= $(BONUS_SRCS:.c=.o)

all: $(NAME) 

%.o: %.c	pipex.h pipex_bonus.h
	@${CC} ${FLAGS} -c $< -o $@ ${HEADERS}
  
$(NAME): ${OBJ_FILES} Makefile 
		@echo "\033[36mCompiling pipex... \033[0m"
		@make --no-print-directory -C $(LIB_DIR)/$(LIBFT_DIR)
		@make --no-print-directory -C $(LIB_DIR)/$(FTPRINTF_DIR)
		$(CC) $(FLAGS) ${OBJ_FILES} ${LIBS} ${HEADERS} -o $(NAME) 
		@echo "\033[36mPipex Compiled! 👻\n\033[36m\\033[49m \033[0m"

bonus : ${BONUS_OBJS} Makefile 
		@echo "\033[36mCompiling pipex bonus... \033[0m"
		@make --no-print-directory -C $(LIB_DIR)/$(LIBFT_DIR)
		@make --no-print-directory -C $(LIB_DIR)/$(FTPRINTF_DIR)
		$(CC) $(FLAGS) $(BONUS_OBJS)  ${LIBS} ${HEADERS} -o $(NAME_BONUS)
		@echo "\033[36mPipex Bonus Compiled! 👻👻👻\n\033[36m\\033[49m \033[0m"

libft:
		@make -C $(LIB_DIR)/$(LIBFT_DIR)

libftprintf:
		@make -C $(LIB_DIR)/$(FTPRINTF_DIR)

clean:
		@make --no-print-directory -C $(LIB_DIR)/$(LIBFT_DIR) clean
		@make --no-print-directory -C $(LIB_DIR)/$(FTPRINTF_DIR) clean
		@echo "\033[36mPurging pipex .a files ... 👻\033[36m\\033[0m"
		rm -f $(OBJ_FILES) $(BONUS_OBJS)

fclean: 
		@make --no-print-directory -C $(LIB_DIR)/$(LIBFT_DIR) fclean
		@make --no-print-directory -C $(LIB_DIR)/$(FTPRINTF_DIR) fclean
		@echo "\033[36mPurging pipex files ... 👻\033[36m\\033[0m"
		rm -f $(OBJ_FILES) $(BONUS_OBJS) $(NAME)


bonus_clean:
		@make --no-print-directory -C $(LIB_DIR)/$(LIBFT_DIR) clean
		@make --no-print-directory -C $(LIB_DIR)/$(FTPRINTF_DIR) clean
		@echo "\033[36mPurging pipex bonus .a files ... 👻\033[36m\\033[0m"
		rm -f $(OBJ_FILES) $(BONUS_OBJS)

bonus_fclean:
		@make --no-print-directory -C $(LIB_DIR)/$(LIBFT_DIR) fclean
		@make --no-print-directory -C $(LIB_DIR)/$(FTPRINTF_DIR) fclean
		@echo "\033[36mPurging pipex files ... 👻\033[36m\\033[0m"
		rm -f $(OBJ_FILES) $(BONUS_OBJS) $(NAME) $(NAME_BONUS)

re:		fclean all

.PHONY:	all clean fclean re