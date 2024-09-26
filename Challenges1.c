#include <stdio.h>

int main() {
    int num;
    printf("Doonez moi un nombre : ");
    scanf("%d",&num);
    if(num % 2 == 0){
        printf("nombre est pair");
    }else{
        printf("nombre est impair");
    }

    return 0;
}