#include <stdio.h>

int main() {

    printf("Carta01 \n");

    char Estado;
    
    printf("Insira o Estado: \n");
    scanf("%c", &Estado);
    printf("Estado: %c\n", Estado);
    
    char Codigo[5];

    printf("Insira o Codigo: \n");
    scanf("%s", &Codigo);
    printf("Codigo: %s\n", Codigo);

    char Cidade[10];

    printf("Insira a Cidade: \n");
    scanf("%s", &Cidade);
    printf("Cidade: %s\n", Cidade);

    int  Populacao;

    printf("Insira a população: \n");
    scanf("%d", &Populacao);
    printf("População: %d\n", Populacao);

    float Area;

    printf("Insira a Area: \n");
    scanf("%f", &Area);
    printf("Area: %.2f km²\n", Area);

    float PIB;

    printf("Insira o PIB: \n");
    scanf("%f", &PIB);
    printf("PIB: %.2f bilhoes de reais\n", PIB);

    int pontosturisticos;

    printf("Insira o numero de pontosturisticos: \n");
    scanf("%d", &pontosturisticos);
    printf("pontosturisticos: %d\n", pontosturisticos);



    return 0;

}