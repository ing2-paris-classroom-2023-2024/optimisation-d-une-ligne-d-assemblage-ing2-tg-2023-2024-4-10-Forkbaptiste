//
// Created by Baptiste le beau gos on 22/11/2023.
//
#include <stdio.h>

int main() {
    // Déclaration des variables
    float nombre1, nombre2, somme;

    // Demande à l'utilisateur d'entrer le premier nombre
    printf("Entrez le premier nombre : ");
    scanf("%f", &nombre1);

    // Demande à l'utilisateur d'entrer le deuxième nombre
    printf("Entrez le deuxième nombre : ");
    scanf("%f", &nombre2);

    // Calcul de la somme
    somme = nombre1 + nombre2;

    // Affichage du résultat
    printf("La somme de %.2f et %.2f est %.2f\n", nombre1, nombre2, somme);

    return 0;
}
