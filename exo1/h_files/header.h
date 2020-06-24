#ifndef _HEADER_H_
#define _HEADER_H_

#include "character.h"

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void Update();
void Display();

void Attack(t_character *attacking, t_character *target);
void Heal(t_character *healing);

#endif /* _HEADER_H_ */