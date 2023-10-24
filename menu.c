#include <stdio.h>
#include <stdlib.h>

void menu() {
    int choix;
    printf("LA REVANCHE DE SNOOPY\n");
    printf("1.Regles du jeu\n2.Lancer un nouveau jeu a partir du niveau 1\n");
    printf("3.Charger une partie\n4.Mots de passe\n");
    printf("5.Scores\n6.Quitter\n");
    scanf("%d",&choix);
    switch (choix){
        case 1:
            printf("A FAIRE"); // ECRIRE LES REGLES DU JEU
            break;
        case 2:
            // LANCEMENT DE LA PARTIE
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
}