#ifndef _HEADER_H_
#define _HEADER_H_

#include "linked_list.h"

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void Update();
void Display();

void Attack(t_character *attacking, t_character *target);
void Heal(t_character *healing);

void enemy_turn(t_character *player, t_character *enemy);

#endif /* _HEADER_H_ */