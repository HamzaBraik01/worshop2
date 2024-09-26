#include <stdio.h>

int main() {
    int nu1;
    int nu2;
    printf("donnez moi le 1er valeur : ");
    scanf("%d",&nu1);
    printf("donnez moi le 2eme valeur : ");
    scanf("%d",&nu2);
    if(nu1==nu2){
        printf("voila le triple est : %d",(nu1+nu2)*3);
    }else{
        printf("la somme de deux valeurs est : %d",nu1+nu2);
    }

    return 0;
}