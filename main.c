#include <stdio.h>

float quadrato(float lato) {

    return lato * lato;
}



int main(void) {
    float latoquadrato;
    printf("Inserisci la misura di latoquadrato: ");
    scanf("%f", &latoquadrato);
    float area = quadrato(latoquadrato);
    printf("l'area è %f",area);

    return 0;
}
