#include <stdio.h>
#include "../h_files/header.h"

void Update() {
    printf("update\n");
}

void Display() {
    printf("Display\n");
}

void Attack(t_character *attacking, t_character *target) {

    //RANDOM POUR ATTACK
    //MIN = attack du jour - 20 %
    //MAX = attack du jour + 20 %
    int damages = attacking->atk * 0.8 + rand() % (int)(attacking->atk * 1.2 - attacking->atk * 0.8 + 1);

    printf("%s inflige %d à %s\n", attacking->name, damages, target->name); 
    target->hp -= damages;
     if (target->hp <= 0)
     {
         target->is_alive = 0;
         target->hp = 0;
     }
    printf("Les HPs de %s sont réduit de %d\n", target->name, target->hp);
}
void Heal(t_character *healing) {

    //RANDOM POUR SE HEAL
    int base_heal = 20;
    int healtValue = base_heal * 0.8 + rand() % (int)(base_heal * 1.2 - base_heal * 0.8 + 1);

    healing->hp += healtValue;
    
    printf("%s se heal de %d PV\n", healing->name, healtValue);
}

void enemy_turn(t_character *player, t_character *enemy) {
    if (enemy->is_alive == 1)
    {
        Attack(enemy, player);
    }
}