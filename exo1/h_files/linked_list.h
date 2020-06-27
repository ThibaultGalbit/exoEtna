#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

#include "character.h"
#include <stdlib.h>

typedef struct s_node t_node;

struct s_node {
    t_character *enemy;
    t_node *next;
};

t_character *create_enemy(int nb);
t_node *create_enemy_list(int count);


#endif /* _LINKED_LIST_H_ */