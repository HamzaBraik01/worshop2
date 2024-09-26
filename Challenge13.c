#include <stdio.h>

void main() {
    float x1, y1, x2, y2, px, py;

    printf("Entrez les coordonnées de A (x1, y1) : ");
    scanf("%f %f", &x1, &y1);

    printf("Entrez les coordonnées de B (x2, y2) : ");
    scanf("%f %f", &x2, &y2);

    printf("Entrez les coordonnées du point P (px, py) : ");
    scanf("%f %f", &px, &py);

    float determinant = (y2 - y1) * (px - x1) - (x2 - x1) * (py - y1);

    if (determinant == 0) {
        if ((px >= x1 && px <= x2 || px >= x2 && px <= x1) && 
            (py >= y1 && py <= y2 || py >= y2 && py <= y1)) {
            printf("Le point P se trouve sur le segment.\n");
        } else {
            printf("Le point P est aligné mais ne se trouve pas sur le segment.\n");
        }
    } else {
        printf("Le point P ne se trouve pas sur le segment.\n");
    }
}
