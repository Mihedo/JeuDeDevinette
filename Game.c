#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"


int main() {
    srand((unsigned int)time(NULL));
    int number = rand() % 100 + 1;
    int guess = 0;

    printf("*******************************************************\n");
    printf("**         Bienvenue dans le jeu de devinette         **\n");
    printf("**       Devinez le nombre entre 1 et 100 inclus      **\n");
    printf("*******************************************************\n\n");

    while (number != guess) {
        printf("Entrez votre estimation : ");
        scanf_s("%d", &guess);

        if (guess < number) {
            printf(RED "Plus haut !\n\n");
        }
        else if (guess > number) {
            printf(GREEN "Plus bas !\n\n");
        }
        else {
            printf(GREEN "*******************************************************\n");
            printf("**                        BRAVO                       **\n");
            printf("**        VOUS AVEZ REUSSI A DEVINER LE NOMBRE        **\n");
            printf("*******************************************************\n\n");
        }
    }
    return 0;
}
