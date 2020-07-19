void game_play(game *g, int x1, int y1){
    g->x += x1
    g->y += y1
}

game create_game(){
    game g;
    game.x = 1;
    game.y = 1;
    game.width = 10;
    game.height = 10;

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
