##
## EPITECH PROJECT, 2021
##
## File description:
##

SRC			=	src/main.c\
				src/cursor.c\
				src/display_score.c\
				src/display_money.c\
				src/life.c\
				src/lib.c\
				src/text_bis.c\
				src/music_bis.c\
				src/display_tower_game.c\
				src/level_tower.c\
				src/animation_tower.c\
				src/init_maps.c\
				src/funct_free_bis.c\
				src/display_text_tower.c\
				src/button.c\
				src/display_button_option.c\
				src/display_gameplay.c\
				src/display_map.c\
				src/display_menu_game_1.c\
				src/display_menu_game_2.c\
				src/display_menu_level_1.c\
				src/display_menu_level_2.c\
				src/display_menu_level_3.c\
				src/display_menu_tower.c\
				src/display_texture_map.c\
				src/event_button_tower.c\
				src/event_game_button_1.c\
				src/event_game_button_2.c\
				src/event_game_button_3.c\
				src/event_game_operation.c\
				src/funct_free.c\
				src/event_game.c\
				src/event_menu.c\
				src/file_to_str.c\
				src/handling_level_1.c\
				src/handling_level_2.c\
				src/handling_level_3.c\
				src/handling_level_1_tower.c\
				src/handling_level_2_tower.c\
				src/handling_level_3_tower.c\
				src/handling_menu_game_over.c\
				src/handling_menu_help.c\
				src/handling_menu_option.c\
				src/handling_menu_pause.c\
				src/handling_menu_principal.c\
				src/handling_menu_start.c\
				src/handling_menu_win.c\
				src/init_struct.c\
				src/level_to_str.c\
				src/menu.c\
				src/music.c\
				src/start_game.c\
				src/text.c\
				src/enemies/create_enemies.c\
				src/enemies/add_new_node.c\
				src/enemies/init_pos_level.c\
				src/enemies/get_rect.c\
				src/enemies/display_enemies.c\
				src/enemies/create_sprite.c\
				src/enemies/math_delta.c\
				src/enemies/moves_enemies.c\
				src/enemies/add_new_node_rhino.c\

OBJ			=	$(SRC:.c=.o)

NAME		=	my_defender

CFLAGS		=	-Wall -Wextra

CPPFLAGS	=	-iquote ./include

LDFLAGS		=	-L ./lib -lmy -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

CC			=	gcc

all: $(NAME)
$(NAME): $(OBJ)
	$(MAKE) -C ./lib/my
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

debug: CFLAGS += -g3
debug: re

clean:
	$(RM) $(OBJ)
	$(MAKE) -C ./lib/my clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C ./lib/my fclean

re: fclean all

./PHONY: all clean fclean
