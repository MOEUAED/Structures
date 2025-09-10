#include <stdio.h>

#define PI 3.1459265359

struct Cercle {
	double rayon ;
};

double c_aire(struct Cercle c){
	return PI * c.rayon * c.rayon;
}

int main() {
    struct Cercle crcl;              

        printf("Entrez le rayon de cercle : ");
        scanf("%lf", &crcl.rayon);    	

	double a = c_aire(crcl);

    printf("L'aire du cercle de rayon %.2lf est : %.2lf\n",crcl.rayon , a);

    return 0;
}

