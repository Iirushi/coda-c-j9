#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

void fill_pos(character *chara) {
    chara->strength = 80;
    chara->intelligence = 75;
    chara->wisdom = 88;
    chara->agility = 85;
    chara->endurance = 92;
}

int main() {
    character *chara = malloc(sizeof(character));
    if (chara == NULL) {
        fprintf(stderr, "Erreur d'allocation mémoire\n");
        return 1;
    }

    fill_pos(chara);

    printf("Votre joueur a %d de force, %d d'intelligence, %d de sagesse, %d d'agilité et %d d'endurance.\n",
           chara->strength, chara->intelligence, chara->wisdom, chara->agility, chara->endurance);

    free(chara);
    return 0;
}