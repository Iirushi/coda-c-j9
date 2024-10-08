#include <stdio.h>
#include <stdlib.h>
#include "struct.h"


void fill_pos(character * chara)
{
    chara->strenght = 80;
    chara->intelligence = 75;
    chara->wisdom = 88;
    chara->agility = 85;
    chara->endurance = 92;


}


int main()
{
    character chara;
    fill_pos(&chara);

    printf("Votre joueur a %d de force, %d d'intellignece, %d de sagesse, %d d'agilité et %d d'endurance.\n", chara.strenght, chara.intelligence, chara.wisdom, chara.agility, chara.endurance);


    return 0;
}