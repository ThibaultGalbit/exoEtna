#include <stdio.h>
#include "../h_files/header.h"

void Update() {
    printf("update\n");
}

void Display() {
    printf("Display\n");
}

void Attack(t_character *attacking, t_character *target) {
    printf("%s attack %s\n", attacking->name, target->hp);
    target->hp -= attacking->atk;
    printf("Les HPs de %s sont réduit de %d\n", target->name, target->hp);
}
void Heal(t_character *healing) {
    printf("%s se heal\n", healing->name);
}