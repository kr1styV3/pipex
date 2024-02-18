NAME = pipex
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
LIBFT_DIR = ./libft/
LIBFT = $(LIBFT_DIR)libft.a
OBJ_DIR = .obj/
INC_DIR = includes/

# Add a list of your pipex source files here
SRC_FILES = $(addprefix src/,main.c \
	pipex.c \
	parsing.c \
	handle_free.c \
	handle_error.c \
	handle_args.c \
	handle_error_2.c \
	parent_process.c \
	child_process.c \
	find_path.c)

# Define the corresponding object files and place them in $(OBJ_DIR)
OBJ_FILES = $(SRC_FILES:src/%.c=$(OBJ_DIR)%.o)

# Add -I$(INC_DIR) to your flags to include header files from the includes directory
CFLAGS += -I$(INC_DIR)

# Bold High Intensity
BOLD_INTENSE_BLACK=\033[1;90m
BOLD_INTENSE_RED=\033[1;91m
BOLD_INTENSE_GREEN=\033[1;92m
BOLD_INTENSE_YELLOW=\033[1;93m
BOLD_INTENSE_BLUE=\033[1;94m
BOLD_INTENSE_PURPLE=\033[1;95m
BOLD_INTENSE_CYAN=\033[1;96m
BOLD_INTENSE_WHITE=\033[1;97m

# Background
BACKGROUND_BLACK=\033[40m
BACKGROUND_RED=\033[41m
BACKGROUND_GREEN=\033[42m
BACKGROUND_YELLOW=\033[43m
BACKGROUND_BLUE=\033[44m
BACKGROUND_PURPLE=\033[45m
BACKGROUND_CYAN=\033[46m
BACKGROUND_WHITE=\033[47m
# ANSI escape sequence for no color (reset)

NC = \033[0m

all: pre-build $(OBJ_DIR) $(NAME)

pre-build:
	@clear
	@echo "$(BOLD_INTENSE_CYAN)Starting compilation...$(NC)"

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

# Pattern rule for object files
$(OBJ_DIR)%.o: src/%.c
	@echo "Compiling $<..."
	@$(CC) $(CFLAGS) -c $< -o $@
	@clear

$(NAME): $(LIBFT) $(OBJ_FILES)
	@echo "$(BOLD_INTENSE_RED)Creating executable $@...$(NC)"
	@$(CC) $(OBJ_FILES) -L$(LIBFT_DIR) -lft -o $(NAME)
	@clear
	@echo "$$PIPEX_ASCII_ART"

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

valgrind: $(NAME)
	@echo "Debugger Mode: Running Valgrind.."
	@valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -\-verbose --log-file=valgrind-out.txt ./$(NAME) file "izshgoiha09873r9q8h" "wc -l" out

clean:
	@echo "Cleaning object files..."
	@rm -f $(OBJ_DIR)*.o
	@rm -rf $(OBJ_DIR)
	@rm -f valgrind-out.txt
	@rm -f outfile
	@rm -f out
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	@echo "Full clean..."
	@rm -f $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean
	@clear

re: fclean all

.PHONY: all clean fclean re

define PIPEX_ASCII_ART
    ____      __  __             _
   / __/___ _/ /_/ /_____     _ | |
  / /_/ __ `/ __/ __/ __ \   (_)/ /
 / __/ /_/ / /_/ /_/ /_/ /  _  / /
/_/ _\__,_/\__/\__/\____/  (_)/_/
   / __ \(_)___  ___  _  __ /_/
  / /_/ / / __ \/ _ \| |/_/
 / ____/ / /_/ /  __/>  <
/_/   /_/ .___/\___/_/|_|
       /_/
endef
export PIPEX_ASCII_ART

