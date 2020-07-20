#include "maze_functions.h"

void game_play(struct game *g, int x1, int y1){
    g->x += x1;
    g->y += y1;
    return;
}

struct game game_create(){
    struct game g;
    g.x = 1;
    g.y = 1;
    g.width = 10;
    g.height = 10;
    g.grid = (int**)malloc(g.height * sizeof(int*));
    for (int i = 0; i < g.height; i++){
        g.grid[i] = (int*)malloc(g.width * sizeof(int));
    }

    g.grid[0] = {1,1,1,1,1,1,1,1,1,1};
    g.grid[1] = {1,2,0,0,1,0,0,0,1,1};
    g.grid[2] = {1,0,1,0,1,0,1,0,0,1};
    g.grid[3] = {1,0,1,0,0,0,1,1,0,1};
    g.grid[4] = {1,0,1,1,1,1,1,0,0,1};
    g.grid[5] = {1,0,0,1,0,0,0,0,1,1};
    g.grid[6] = {1,1,0,1,0,1,1,1,1,1};
    g.grid[7] = {1,1,0,1,0,0,0,1,1,1};
    g.grid[8] = {1,0,0,0,0,1,0,0,3,1};
    g.grid[9] = {1,1,1,1,1,1,1,1,1,1};

    return g;
}

bool move_is_valid(struct game *g, int x1, int y1){
    if (g->grid[g->y + y1][g->x + x1] == 0 ||
        g->grid[g->y + y1][g->x + x1] == 3){
        return true;
    }
    else{
        return false;
    }
}

bool game_is_over(struct game *g){
    if (g->grid[g->y][g->x] == 3){
        return true;
    }
    else{
        return false;
    }
}

void game_delete(struct game *g){
    for (int i = 0; i < g->height; i++){
        free(g->grid[i]);
    }
    free(g->grid);
    free(g);
    return;
}
