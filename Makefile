
# Targets
NAME	= push_swap
LIBFT	= libft
PRINTF	= ftprintf

# Directories
LIBS_DIR 	= ./libs
LIBFT_DIR	= $(LIBS_DIR)/libft
PRINTF_DIR	= $(LIBS_DIR)/ft_printf
INCS_DIR	= ./includes
SRCS_DIR	= ./srcs
BIN_DIR		= ./bin
TST_DIR		= ./test~

# Libraries
PRINTF_LIB	= $(abspath $(PRINTF_DIR)/libftprintf.a)
LIBFT_LIB	= $(abspath $(LIBFT_DIR)/libft.a)

# Makefile
MF 			= Makefile

# Compiler
CC 			= gcc
CFLAGS		= -g -Wall -Wextra -Werror -I$(INCS_DIR) -I$(LIBFT_DIR) -I$(PRINTF_LIB)
LFLAGS		= -L$(LIBFT_DIR) -lft -L$(PRINTF_DIR) -lftprintf	

# FILES
INC_FILES	= push_swap.h
SRC_FILES	= push_swap.c push.c swap.c reverse.c rotate.c m_memory.c string.c \
			  ft_utils.c args_manager.c sortengine.c ft_maths.c print.c
TST_FILES	= push_swap.c push.c swap.c reverse.c rotate.c m_memory.c string.c \
			  ft_utils.c args_manager.c sortengine.c ft_maths.c print.c 

# Route to files
SRCS		= $(addprefix $(SRCS_DIR)/, $(SRC_FILES))
INCS		= $(addprefix $(INCS_DIR)/, $(INC_FILES))
TSTS		= $(addprefix $(TST_DIR)/, $(TST_FILES))

# Route to Objects
OBJS		= $(SRCS_DIR/%.c=%.o)
DOBJS		= $(TST_DIR/%.c=%.o)

# -----

all: $(LIBFT) $(PRINTF) $(NAME)

$(LIBFT) :
	@echo "\033[1;37m== Compiling  LIBFT\033[0m\n"
	$(MAKE) -C $(LIBFT_DIR)

$(PRINTF) :
	@echo "\033[1;37m== Compiling  PRINTF\033[0m\n"
	$(MAKE) -C $(PRINTF_DIR)

$(OBJS) : $(SRCS)
	$(CC) -c $< $(CFLAGS) -o $@

$(NAME) : $(MF) $(OBJS) $(INCS)
	$(CC) $(SRCS) $(CFLAGS) $(LFLAGS) -o $(BIN_DIR)/$(NAME)

devre : fclean $(LIBFT) $(PRINTF) dev

$(DOBJS) : $(TSTS)
	$(CC) -c $< $(CFLAGS) -o $@

dev : $(MF) $(DOBJS) $(INCS)
	$(CC) -g $(TSTS) $(CFLAGS) $(LFLAGS) -o $(BIN_DIR)/$(NAME)

test1 : 
	$(BIN_DIR)/$(NAME) 1 4 3 128 15 53 28 13 32 64

test-dups : 
	$(BIN_DIR)/$(NAME) 1 4 3 128 4 53 28 13 32 64

test-three : 
	$(BIN_DIR)/$(NAME) 1 4 3

re: fclean all

clean: 
	@echo "\033[1;34m:: Removing object files \033[0m\n"
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(PRINTF_DIR) fclean
	@rm -vf $(SRC_OBJS)
	@rm -vf $(SRC_OBJS)

fclean: clean 
	@echo "\033[1:34m:: Removing all (objs & execs)\033[0m\n"
	@rm -vf $(NAME)

.PHONY: clean fclean re all

