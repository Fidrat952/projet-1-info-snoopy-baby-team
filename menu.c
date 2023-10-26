#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "biblio.h"

void rdj() {
    system("cls");
    printf("Voici les regles du jeu:\n"
           "- Pour chaque niveau, vous devez attraper 4 oiseaux\n"
           "-Vous avez 120 secondes pour chaque niveaux\n"
           "-Vous allez parcourir 4 niveaux, de plus en plus dur\n"
           "-  Vous perdez une vie si une balle et/ou un ennemi touche Snoopy\n"
           "- Vous avez 3 vies par niveau\n");
    printf("appuyer sur une touche pour retourner au menu principal\n");
    getchar();
    getchar();// 2 getchar de suite car lorsque il n'y en a qu'un, cela provoque un probleme
}

void menu() {
    int choix;
    do {
        system("cls");
        printf("LA REVANCHE DE SNOOPY\n");
        printf("1.Regles du jeu\n2.Lancer un nouveau jeu a partir du niveau 1\n");
        printf("3.Charger une partie\n4.Mots de passe\n");
        printf("5.Scores\n6.Quitter\n");
        scanf("%d", &choix);
        switch (choix) {
            case 1:
                rdj(); // ECRIRE LES REGLES DU JEU
                break;
            case 2: // Lancer le jeu depuis le début
                system("cls");
                printf("NIVEAU 1");
                sleep(5);
                system("cls");
                jeu();
                break;
            case 3:
                // CHARGER UNE PARTIE
                break;
            case 4:
                // CHOIX DE NIVEAUX AVEC LES MDP
                break;
            case 5:
                //AFFICHER LES SCORES PRECEDENTS
                break;
            case 6:
                printf("Au revoir !");
                exit(0);
        }
    }while(choix!=6);
}