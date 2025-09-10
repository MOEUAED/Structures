#include<stdio.h>

struct personne {
	char nom [50];
	char prenom[50];
	int age;
};

int main (){
	struct personne p1;
	
	printf("entrer votre nom : ");
	scanf("%s",p1.nom);
	
	printf("entrer votre prenom : ");
	scanf("%s",p1.prenom);
	
	printf("entrer votre age : ");
	scanf("%d",&p1.age);
	
	printf("votre nom est : %s \n", p1.nom);
		printf("votre prenom est : %s \n",p1.prenom);
			printf("your age est : %d \n",p1.age);	
	
	return 0;
}
