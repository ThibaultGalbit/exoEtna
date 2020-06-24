#include "h_files/header.h"
#include "h_files/commands.h"


int main() {

    //Initialisation
    printf("%s\n", "Bonjour");

    t_character player = {"Bobby", 50, 10};
    t_character enemy = {"Villain", 50, 10};

    char user_input[10];
    srand(time(NULL)); //génère le side
    fgets(user_input, 10, stdin);

    while (strcmp(user_input, "exit\n") != 0) {
        
        //TOUR DU JOUEUR
        call_function(user_input, &player, &enemy);

        //TOUR DE L'ENEMY


        fgets(user_input, 10, stdin);
    }


    //Clean des ressources
    return (0);
}