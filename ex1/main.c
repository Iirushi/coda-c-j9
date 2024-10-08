#include <stdio.h>
#include <stdlib.h>
#include "struct.h"



int main()
{
    character chara;
    chara.strenght = 80;
    chara.intelligence = 70;
    chara.wisdom = 70;
    chara.agility = 88;
    chara.endurance = 93;

    printf("Votre joueur a %d de force, %d d'intellignece, %d de sagesse, %d d'agilité et %d d'endurance.\n", chara.strenght, chara.intelligence, chara.wisdom, chara.agility, chara.endurance);


    return 0;
}