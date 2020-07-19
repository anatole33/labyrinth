#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[]){
    g = game_create;
    // get pointer on the game
    game *current_game*= &g;

    while (!game_is_over(current_game)){
        
    }

    game_delete(current_game);
    return 0;
}
