#include <stdio.h>
#include <string.h>

struct Produit {
    char nom[50];
    char prix[50];
    int quantite;
};

int main() {
    int n, i;

    printf("Combien de produits voulez-vous entrer ? ");
    scanf("%d", &n);
    getchar(); 

    struct Produit produits[n]; 
    
    for (i = 0; i < n; i++) {
        printf("\nProduit %d\n", i + 1);

        printf("  Nom      : ");
        fgets(produits[i].nom, sizeof(produits[i].nom), stdin);
        produits[i].nom[strcspn(produits[i].nom, "\n")] = '\0';

        printf("  Prix     : ");
        fgets(produits[i].prix, sizeof(produits[i].prix), stdin);
        produits[i].prix[strcspn(produits[i].prix, "\n")] = '\0';

        printf("  Quantite : ");
        scanf("%d", &produits[i].quantite);
        getchar();
    }

    printf("\nListe des produits :\n");
    for (i = 0; i < n; i++) {
        printf("Produit %d:\n", i + 1);
        printf("  Nom      : %s\n", produits[i].nom);
        printf("  Prix     : %s\n", produits[i].prix);
        printf("  Quantite : %d\n\n", produits[i].quantite);
    }

    return 0;
}

