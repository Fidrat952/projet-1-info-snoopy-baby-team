#include <stdio.h>
#include "biblio.h"
#include <unistd.h>

void niveau(char decortest[10][20]){
    system("cls");
    for (int i=0;i<10;i++){
        printf("\n");
        for(int j=0;j<20;j++){
            decortest[i][j] = '0';
            printf("%c",decortest[i][j]);
        }
    }
}

void sauvegarde(char matrice[10][20]){ // Sauvegarde de partie
    FILE *f = fopen("Sauvegarde.txt", "w"); // Création du fichier sauvegarde
    if(f == NULL) { //en cas d'erreur renvoyer une erreur
        perror("Impossible de sauvegarder");
    } else {// Affichage de la matrice à l'instant de la sauvegarde dans le fichier
        for (int i=0;i<10;i++){
            fprintf(f,"\n");
            for(int j=0;j<20;j++){
                fprintf(f,"%c",matrice[i][j]);
            }
        }
        fclose(f); // fermeture du fichier
    }
}