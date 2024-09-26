#include <stdio.h>
#include <math.h>

int main() {
    
    double a, b, c, delta, x1, x2;
    printf("Entrez les coefficients a, b et c (pour ax^2 + bx + c = 0) : \n");
    printf("a : ");
    scanf("%lf",&a);
    printf("b : ");
    scanf("%lf",&b);
    printf("c : ");
    scanf("%lf",&c);
    
    delta = (b * b) - 4 * a * c;

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Les solutions sont : x1 = %.2lf et x2 = %.2lf\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("La solution unique est : x = %.2lf\n", x1);
    } else {
        printf("Il n'y a pas de solutions réelles.\n");
    }

    return 0; 
}
