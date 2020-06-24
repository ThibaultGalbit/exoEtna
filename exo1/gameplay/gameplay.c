#include <stdio.h>
#include "../h_files/header.h"

void Update() {
    printf("update\n");
}

void Display() {
    printf("Display\n");
}

void Attack(t_character *attacking, t_character *target) {

    //RANDOM POUR SE HEAL
    //MIN = attack du jour - 20 %
    //MAX = attack du jour + 20 %
    int random = attacking->atk * 0.8 + rand() % (int)(attacking->atk * 1.2 - attacking->atk * 0.8 + 1);

    printf("%s attack %s\n", attacking->name, target->name);
    target->hp -= random;
    printf("Les HPs de %s sont réduit de %d\n", target->name, target->hp);
}
void Heal(t_character *healing) {

    int random = healing->atk * 0.8 + rand() % (int)(healing->atk * 1.2 - healing->atk * 0.8 + 1);

    printf("%s se heal\n", healing->name);
    healing->hp += random;
    printf("Les HP de %s sont maintenant a : %d\n", healing->name, healing->hp);
}