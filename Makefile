NAME = so_long

PRINTF = printf/libftprintf.a

MLX = minilibx-linux/libmlx_Linux.a

SRC = ./gnl/get_next_line_utils.c \
	  ./gnl/get_next_line.c \
	  ./utils/read/count_lines.c \
	  ./utils/read/read_map.c \
	  ./utils/read/get_width.c \
	  ./utils/read/get_map.c \
	  ./utils/errors/is_rectangle.c \
	  ./utils/errors/is_apt.c \
	  ./utils/errors/is_closed.c \
	  ./utils/errors/is_propper.c \
	  ./utils/errors/is_elements.c \
	  ./utils/errors/is_ber.c \
	  ./utils/settings/init_data.c \
	  ./utils/path_handling/is_playable.c \
	  ./utils/path_handling/is_surrounded.c \
	  ./utils/path_handling/new_intersection.c \
	  ./utils/path_handling/paint_columns.c \
	  ./utils/path_handling/paint_map.c \
	  ./utils/path_handling/paint_rows.c \
	  ./utils/path_handling/pop_intersection.c \
	  ./utils/game_play/configure_info.c \
	  ./utils/game_play/redraw_map.c \
	  ./utils/game_play/event_key.c \
	  ./utils/game_play/free_matrix.c \
	  ./utils/game_play/exit_game.c \
	  ./utils/game_play/draws_events.c \
	  main.c \

CFLAGS = -Wall -Wextra -Werror -I inc -I minilibx-linux -I printf -fsanitize=address -g3

LDFLAGS = -Wall -Wextra -Werror -lXext -lX11 -lm -lz -fsanitize=address -g3

CC = cc

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(MLX) $(PRINTF)
	$(CC) $(LDFLAGS) $(OBJ) $(MLX) $(PRINTF) -o $(NAME)

$(MLX):
	$(MAKE) -C minilibx-linux

$(PRINTF):
	$(MAKE) -C printf

clean:
	$(MAKE) clean -C printf
	$(MAKE) clean -C minilibx-linux
	-rm -rf $(OBJ)

fclean: clean
	-rm -rf $(NAME)
	-rm -rf $(PRINTF)

re: fclean all

normain:
	-@norminette main.c

normi:
	-@norminette utils

normiall: normi normain
	-@norminette inc/so_long.h

checkfail:
	-@$(MAKE) --no-print-directory normiall > temp.txt
	-@grep -v "OK!" temp.txt | sed "s/^/\\x1b[0;31m/; s/$$/\\x1b[0m/"
	-@if ! grep -v "OK!" temp.txt; then echo "\033[0;32mSIN FALLOS!!\033[0m"; fi
	-@rm -rf temp.txt

# -@cat temp.txt | grep -v "OK!" || true