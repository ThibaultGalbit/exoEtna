#include "../h_files/header.h"

t_character *create_enemy(int nb) {

    t_character *enemy = malloc(sizeof(t_character));

    enemy->name = "Villain";
    enemy->hp = 50;
    enemy->atk = 10;
    enemy->is_alive = 1;
    enemy->nb = nb;
}

void add_node(t_node *first, int i) {

    //Initialisation du nouveau node

    t_node *node = first;
    t_node *new = malloc(sizeof(t_node));

    //passage des paramètres du nouveau node
    new->enemy = create_enemy(i + 1);
    new->next = NULL;

    while (node->next != NULL)
    {
        printf("%d\n", node->enemy->nb);
        node = node->next;
    }

    node->next = new;
    
}

t_node *create_enemy_list(int count) {

    //Initialisation du premier node
    t_node *first = malloc(sizeof(t_node));

    //passage des paramètres
    //Création de la prremière node
    first->enemy = create_enemy(0);
    first->next = NULL;

    for (int  i = 0; i <= count; i++)
    {
        //Tant que i est < que le nombre passer en param
        //On créer une nouvelle node
        printf("start\n");
        add_node(first, i);
    }    
}
