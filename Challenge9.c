#include <stdio.h>

int main() {
    char caract;
    int asci;
    printf("donnez moi un caractere : ");
    scanf("%c",&caract);
    asci=(int)caract;
    if ((asci >= 65 && asci <= 90) || (asci >= 97 && asci <= 122)) {

        if (asci >= 97 && asci <= 122) {
            printf("Le caractère '%c' est une lettre minuscule.\n", caract);
        }
        
        else {
            printf("Le caractère '%c' est une lettre majuscule.\n", caract);
        }
    } else {
        printf("Le caractère '%c' n'est pas une lettre de l'alphabet.\n", caract);
    }

    return 0;
}
