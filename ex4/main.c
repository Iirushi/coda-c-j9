#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"

void fill_character(character *chara) {
    chara->name = malloc(50 * sizeof(char)); // Allouer de la mémoire pour le nom
    if (chara->name == NULL) {
        fprintf(stderr, "Erreur d'allocation mémoire pour le nom\n");
        exit(1);
    }
    strcpy(chara->name, "Aragorn");
    chara->strength = 80;
    chara->intelligence = 75;
    chara->wisdom = 88;
    chara->agility = 85;
    chara->endurance = 92;
}

int main() {
    character *chara = malloc(sizeof(character));
    if (chara == NULL) {
        fprintf(stderr, "Erreur d'allocation mémoire pour le personnage\n");
        return 1;
    }

    fill_character(chara);

    printf("Nom du personnage : %s\n", chara->name);
    printf("Caractéristiques : \n");
    printf("- Force : %d\n", chara->strength);
    printf("- Intelligence : %d\n", chara->intelligence);
    printf("- Sagesse : %d\n", chara->wisdom);
    printf("- Agilité : %d\n", chara->agility);
    printf("- Endurance : %d\n", chara->endurance);

    free(chara->name); // Libérer la mémoire allouée pour le nom
    free(chara);       // Libérer la mémoire allouée pour la structure
    return 0;
}