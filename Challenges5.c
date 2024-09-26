#include <stdio.h>

int main() {
   int anne;
   int Mois;
   int Jours;
   int Heures;
   int Minutes;
   int Secondes;
   int choice;
   printf("Entrez le nombre d'années à convertir: ");
   scanf("%d",&anne);
   printf("\nSélectionnez l'option de conversion:\n");
    printf("1. Convertir en mois\n");
    printf("2. Convertir en jours\n");
    printf("3. Convertir en heures\n");
    printf("4. Convertir en minutes\n");
    printf("5. Convertir en secondes\n");
    printf("Votre choix: ");
    scanf("%d", &choice);
    Mois = anne * 12;                
    Jours = anne * 365;                 
    Heures =  Jours * 24;                  
    Minutes = Heures * 60;               
    Secondes = Minutes * 60;
    switch (choice){
        case 1:
              printf("voila le nomber des mois est : %d",Mois);
              break;
        case 2:
              printf("voila le nomber des Jours est : %d",Jours);
              break;    
        case 3:
              printf("voila le nomber des Heures est : %d",Heures);
              break;  
        case 4:
              printf("voila le nomber des Minutes est : %d",Minutes);
              break;   
        case 5:
              printf("voila le nomber des secondes est : %d",Secondes);
              break;      
    }

    return 0;
}//pour l'annee bissextile
/*
#include <stdio.h>

int main() {
    int years;
    int months, days, hours, minutes, seconds;

    printf("Entrez le nombre d'années  : ");
    scanf("%d", &years);

    
    int annee_bissextile = (years % 4 == 0 && (years % 100 != 0 || years % 400 == 0));

    if (annee_bissextile) {
        days = years * 365 + 1;  
    } else {
        days = years * 365;
    }

    // Autres calculs
    months = years * 12;                
    hours = days * 24;                  
    minutes = hours * 60;               
    seconds = minutes * 60;             

    // Affichage des résultats
    printf("\nPour %d année(s) :\n", years);
    printf("- Mois : %d\n", months);
    printf("- Jours : %d\n", days);
    printf("- Heures : %d\n", hours);
    printf("- Minutes : %d\n", minutes);
    printf("- Secondes : %d\n", seconds);

    return 0;
}
*/
