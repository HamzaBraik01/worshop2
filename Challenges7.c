#include <stdio.h>

int main() {
    char ch;

    printf("Entrez un caractère : ");
    scanf(" %c", &ch);
    int asciiValue = (int)ch; 
    printf("Le code ASCII de '%c' est : %d\n", ch, asciiValue);

    if (asciiValue >= 65 && asciiValue <= 90) {
        printf("Le caractère '%c' est un alphabet majuscule.\n", ch);
    } else {
        printf("Le caractère '%c' n'est pas un alphabet majuscule.\n", ch);
    }

    return 0;
}
