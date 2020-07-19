#include <stdio.h>
#include <stdlib.h>

typedef struct game{
    **grid;
    int x;
    int y;
    int width;
    int height;
}

void game_play(game *g, int x1, int y1);
game game_create();
bool move_is_valid(game *g, int x1, int y1);
void game_display(game *g);
bool game_is_over(game *g);
void game_delete(game *g);
