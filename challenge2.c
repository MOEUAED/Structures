#include<stdio.h>

struct etudiant{
	
	char nom[50];
	char prenom[50];
	int note[10];
};

int main(){
	int n,i;
	printf("entrer le nombre des utudiants : ");
	scanf("%d",&n);
	
	struct etudiant e[n];
	
	for (i = 0 ; i < n ; i++){
		printf("entrer le nom de %d etudiant :",i+1);
		scanf("%s", e[i].nom);	
		printf("entrer le prenom de %d etudiant :",i+1);
		scanf("%s",e[i].prenom);
		printf("entrer la note de %d etudiant :",i+1);
		scanf("%s",&e[i].note);	
	}
	
	for (i = 0; i < n; i++) {
        printf("Nom: %s | Prenom: %s | Note: %d\n",
        e[i].nom, e[i].prenom, e[i].note);
    }	
	
	return 0;
}
