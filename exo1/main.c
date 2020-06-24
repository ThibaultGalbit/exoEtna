#include <stdio.h>
#include <string.h>
#include "h_files/header.h"


int main() {

    //Initialisation
    printf("%s\n", "Bonjour");

    t_character player = {"Bobby", 50, 10};
    t_character enemy = {"Villain", 50, 10};

    char user_input[10];
    fgets(user_input, 10, stdin);

    while (strcmp(user_input, "exit\n") != 0) {

       call_function(user_input, &player, &enemy);

        fgets(user_input, 10, stdin);
    }


    //Clean des ressources
    return (0);
}