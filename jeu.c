// Fichier qui gere la boucle de jeu
#include <conio.h>
#include "biblio.h"
#include <unistd.h>
#include <stdio.h>

void jeu() {
    char action;// variable des touches pressées
    char decor[10][20];
    niveau(decor); // chargement du niveau
    while (1){
        if(_kbhit()){ // si une touche du clavier est appuyée
            action = _getch(); // definir a la variable action cette touche
            if(action == 's' || action == 'S'){ //si cette touche est s ou S, sauvegarder
                sauvegarde(decor);
            }
            if(action == 'p' || action == 'P'){
                system("cls");
                printf("\tJeu en pause\nSaisissez 'ENTRER' pour continuer");
                getchar();
                niveau(decor);
            }
        }
    }
}
