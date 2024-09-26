#include <stdio.h>

int main() {
    char caract;
    printf("saisi un caractère : ");
    scanf("%c",&caract);
    switch(caract) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c est une voyelle.\n", caract);
            break;
        default:
            printf("%c n'est pas une voyelle.\n", caract);
    }
          

    return 0;
}