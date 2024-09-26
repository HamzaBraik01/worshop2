#include <stdio.h>

int main() {
    float number;

    printf("Entrez un nombre : ");
    scanf("%f", &number);

    if (number > 0) {
        printf("Le nombre %.2f est positif.\n", number);
    } else if (number < 0) {
        printf("Le nombre %.2f est négatif.\n", number);
    } else {
        printf("Le nombre est égal à zéro.\n");
    }

    return 0;
}