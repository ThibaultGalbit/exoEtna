#include "h_files/header.h"
#include "h_files/commands.h"

void displayStat(t_character player, t_character enemy) {
    printf("----- %s -----\n", enemy.name);
    printf("HP--- %d -----\n\n", enemy.hp);
    printf("----- %s -----\n", player.name);
    printf("HP--- %d -----\n\n", player.hp);
}

int check_endGame(t_character player, t_character enemy) {

    if (enemy.is_alive == 0) {
        printf("Bravo, tu as gagné\n");
        return (1);
    } else if (player.is_alive == 0) {
        printf("Game over\n");
        return (1);
    } 
    return (0);
}

int main() {

   
    printf("%s\n", "Bonjour");

    t_node *list = create_enemy_list(9);

    //Initialisation
    /*t_character player = {"Bobby", 50, 10, 1};

    t_character *enemy = create_enemy("Villain");
    t_character *enemy2 = create_enemy("Villain2");
    t_character *enemy3 = create_enemy("Villain3");

    printf("%s %d\n", enemy->name, enemy->hp);
    printf("%s %d\n", enemy2->name, enemy->hp);*/




    /**int game_over = 0;

    char user_input[10] = "";
    srand(time(NULL)); //génère le side*/

   /* while (strcmp(user_input, "exit\n") != 0 && game_over != 1) {

        displayStat(player, enemy);

        if (game_over != 1)
        {
            fgets(user_input, 10, stdin);
        }

        if (player.is_alive == 1) {
            call_function(user_input, &player, &enemy);
        }

        enemy_turn(&player, &enemy);

        game_over = check_endGame(player, enemy);

    }*/


    //Clean des ressources
    return (0);
}