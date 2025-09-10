#include <stdio.h>
#include <string.h>

struct Livre {
    char titre[50];
    char auteur[50];
    int annee;
};


struct Livre creerLivre() {
    struct Livre livre;

    printf("Entrez le titre du livre : ");
    fgets(livre.titre, sizeof(livre.titre), stdin);
    livre.titre[strcspn(livre.titre, "\n")] = '\0';
    
    printf("Entrez l'auteur du livre : ");
    fgets(livre.auteur, sizeof(livre.auteur), stdin);
    livre.auteur[strcspn(livre.auteur, "\n")] = '\0'; 

    printf("Entrez l'annee de publication : ");
    scanf("%d", &livre.annee);
    getchar(); 

    return livre;
}

int main() {
    struct Livre monLivre = creerLivre();

    printf("\nInformations sur le livre :\n");
    printf("Titre : %s\n", monLivre.titre);
    printf("Auteur : %s\n", monLivre.auteur);
    printf("Annee : %d\n", monLivre.annee);

    return 0;
}

