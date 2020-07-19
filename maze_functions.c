#include "maze_functions.h"

void game_play(game *g, int x1, int y1){
    g->x += x1
    g->y += y1
}

game game_create(){
    game g;
    game->x = 1;
    game->y = 1;
    game->width = 10;
    game->height = 10;
    int** grid = (int**)malloc(game.height * sizeof(int*))
    for (int i = 0; i < game.height; i++){
        grid[i] = (int*)malloc(game.width * sizeof(int))
    }
    game->grid = grid

    game.grid[0] = [1,1,1,1,1,1,1,1,1,1];
    game.grid[1] = [1,2,0,0,1,0,0,0,1,1];
    game.grid[2] = [1,0,1,0,1,0,1,0,0,1];
    game.grid[3] = [1,0,1,0,0,0,1,1,0,1];
    game.grid[4] = [1,0,1,1,1,1,1,0,0,1];
    game.grid[5] = [1,0,0,1,0,0,0,0,1,1];
    game.grid[6] = [1,1,0,1,0,1,1,1,1,1];
    game.grid[7] = [1,1,0,1,0,0,0,1,1,1];
    game.grid[8] = [1,0,0,0,0,1,0,0,3,1];
    game.grid[9] = [1,1,1,1,1,1,1,1,1,1];

    return g;
}

bool move_is_valid(game *g, int x1, int y1){
    if (game->grid[game->y + y1][game->x + x1] == 0 ||
        game->grid[game->y + y1][game->x + x1] == 3){
        return true;
    }
    else{
        return false;
    }
}

bool game_is_over(game *g){
    if (game->grid[game->y][game->x] == 3){
        return true;
    }
    else{
        return false;
    }
}
