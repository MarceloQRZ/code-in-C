#include<stdio.h>
#include<math.h>

float DistEuc(){
    int tam = 0;
    float distancia, soma = 0;

    printf("Digite o tamanho dos seus vetores: \n");
    scanf("%i", &tam);

    printf("\nPrimeiro vetor\n");
    float vetor1[tam];
    for(int i = 0; i < tam; i++){
        printf("Digite o valor do indice %i: ", i);
        scanf("%f", &vetor1[i]);
    }

    printf("Segundo vetor: \n");

    float vetor2[tam];
    for(int i = 0; i < tam; i++){
        printf("Digite o valor do indice %i: ", i);
        scanf("%f", &vetor2[i]);
    }

    for(int i = 0; i < tam; i++){
        soma = (vetor1[i] - vetor2[i]) * (vetor1[i] - vetor2[i]);
        distancia += soma;
    }
    distancia = sqrt(distancia);

    return distancia;

}

int main(){
    
    printf("%f", DistEuc());

}