#include <stdio.h>

struct Point {
    int x;
    int y;
};
void myp(struct Point *p1) {
    printf("donner la valeur de x:\n");
    scanf("%d", &p1->x);
    printf("donner la valeur de y:\n");
    scanf("%d", &p1->y);
}

int main() {
    struct Point p; 
    p.x = 2;
    p.y = 4;
    printf("Le point avant modifie est : (x : %d , y : %d)\n", p.x, p.y);
    struct Point *p1 = &p;
	myp(p1);

    printf("Le point modifie est : (x : %d , y : %d)\n", p.x, p.y);

    return 0;
}

