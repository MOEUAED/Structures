#include <stdio.h>
#include <string.h>

struct Date {
    int jour;
    int mois;
    int annee;
};

int main() {
    struct Date d;          
    struct Date *ptr = &d;    

    do {
        printf("Entrez le jour : ");
        scanf("%d", &ptr->jour);    	
    } while (ptr->jour < 1 || ptr->jour > 31);

    do {
        printf("Entrez le mois : ");
        scanf("%d", &ptr->mois);
    } while (ptr->mois < 1 || ptr->mois > 12);

    do {
        printf("Entrez l'annee : ");
        scanf("%d", &ptr->annee);
    } while (ptr->annee < 1950 || ptr->annee > 2025);

    printf("\nLa date saisie est : %02d/%02d/%d\n", ptr->jour, ptr->mois, ptr->annee);

    return 0;
}

