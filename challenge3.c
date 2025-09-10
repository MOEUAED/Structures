#include<stdio.h>

struct Rectangle{
	
	double longeur;
	double  largeur;
};

double aire(struct Rectangle r){
	return r.largeur*r.longeur;
}

int main(){

	struct Rectangle r ;
	printf("entrer la longeur de rectangle :");
	scanf("%lf", &r.longeur );
	printf("entrer la largeur de rectangle :");
	scanf("%lf", &r.largeur );
	
	printf("%.2lf",aire(r));
	
	return 0;
}
