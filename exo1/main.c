#include <stdio.h>
#include <string.h>
#include "h_files/header.c"

typedef struct s_command
{
    char *command;
    void (*fct)();
    t_command;
}


int main() {

    //Initialisation
    printf("%s\n", "Bonjour");

    int hp = 50;
    int atk = 50;

    t_command function_array[] = {
        {"heal", &Heal},
        {"attack", &Attack},
        {0,0}
    };

    char input_user[10];
    fgets(input_user, 10, stdin);

    while (strcmp(input_user, "exit\n") != 0) {

        printf("%s", input_user);

        if (strcmp(input_user, "attack\n") == 0) {
            //Attak
            Attack();
        } else if (strcmp(input_user, "heal\n") == 0) {
            //Heal
            Heal();
        } else {
            printf("wrong input\n");
        }

        fgets(input_user, 10, stdin);
    }


    //Clean des ressources
    return (0);
}