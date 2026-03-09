#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

 char nome[20];
 char CodigoDaCarta[20];
 char NomeDaCidade[30];
 int população;
 int NumerosDePontosTuristicos;
 float AreaEmkm2;
 float pib;

 printf("Digite seu nome \n");
 scanf("%s", nome);

 printf("Digite o codigo da carta \n");
 scanf("%s", CodigoDaCarta);

 printf("Digite o nome da cidade \n");
 scanf("%s", NomeDaCidade);

 printf("Digite a população \n");
 scanf("%d", &população);

 printf("Digite o numero de pontos turisticos \n");
 scanf("%d", &NumerosDePontosTuristicos);

printf("Digite a area em km2 \n");
scanf("%f", &AreaEmkm2);

printf("Digite o pib \n");
scanf("%f", &pib);

    return 0;
}
