#include <stdio.h>
#include <string.h>

struct Compte {
    char nom[50];
    double solde;
};

void ajouterSolde(struct Compte *c, double montant) {
    c->solde += montant; 
}

int main() {
    struct Compte client;
    printf("Entrez le nom du client : ");
    fgets(client.nom, sizeof(client.nom), stdin);
    client.nom[strcspn(client.nom, "\n")] = '\0'; 
    printf("Entrez le solde initial : ");
    scanf("%lf", &client.solde);
    double montant;
    printf("Entrez le montant a ajouter : ");
    scanf("%lf", &montant);
    ajouterSolde(&client, montant);
    printf("\nLe nouveau solde de %s est : %.2lf\n", client.nom, client.solde);

    return 0;
}

