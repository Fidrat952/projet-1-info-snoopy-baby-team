// Fichier qui gere la boucle de jeu
#include <conio.h>
#include "biblio.h"

void jeu() {
    char action;// variable des touches pressées
    char decor[10][20];
    niveau(decor); // chargement du décor initial du niveau 1
    while (1){
        if(_kbhit()){ // si une touche du clavier est appuyée
            action = _getch(); // definir a la variable action cette touche
            if(action == 's' || action == 'S'){ //si cette touche est s ou S, sauvegarder
                sauvegarde(decor);
            }
        }
    }
}
