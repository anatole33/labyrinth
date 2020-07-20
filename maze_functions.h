#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct game{
    int** grid;
    int x;
    int y;
    int width;
    int height;
};

void game_play(struct game *g, int x1, int y1);
struct game game_create();
bool move_is_valid(struct game *g, int x1, int y1);
void game_display(struct game *g);
bool game_is_over(struct game *g);
void game_delete(struct game *g);
