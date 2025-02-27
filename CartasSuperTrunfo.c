#include <stdio.h>

int main(){

// Declarando Variáveis;
char estado1, estado2;
char carta1[6], carta2[6];
char cidade1[20], cidade2[20];
int populacao1, populacao2, pontosturisticos1, pontosturisticos2;
float area1, area2, pib1, pib2, densidade1, pibpercapita1, densidade2, pibpercapita2;

// Gera na tela uma  mensagem de boas vindas;
printf("SEJA BEM VINDO AO SUPERTRUNFO, DIVIRTA-SE!\n");

// Pula uma linha;
printf("\n");

// PRIMEIRO O SISTEMA VAI RECEBER E GUARDAR OS DADOS DA CARTA 1;

// Recebendo e guardando informações da letra do estado da CARTA 1;
printf("Primeiro Vamos inserir as informações da CARTA 1\n");
printf("Informe uma Letra de 'A' a 'H' para o Estado\n");
scanf(" %c", &estado1);

// Recebendo e guardando informações do código da CARTA 1 ;
printf("Informe o código da carta, 'A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)'\n");
scanf(" %s", &carta1);

// Recebendo e guardando informações do nome da cidade da CARTA 1;
printf("Informe o nome da cidade\n");
scanf(" %s", &cidade1);

// Recebendo e guardando informações do número de habitantes da cidade da CARTA 1;
printf("Informe o número de habitantes da cidade\n");
scanf(" %d", &populacao1);

// Recebendo e guardando a área da cidade em quilômetros quadrados da cidade da CARTA 1;
printf("Informe a área da cidade em quilômetros quadrados\n");
scanf(" %f", &area1);

// Recebendo e guardando o produto interno bruto da cidade da CARTA 1;
printf("Informe o Produto Interno Bruto (PIB)\n");
scanf(" %f", &pib1);

// Recebendo e guardando a quantidade de pontos turisticos da cidade da CARTA1;
printf("Informe quantidade de pontos turísticos\n");
scanf(" %d", &pontosturisticos1);

// Fórmula para calcular a densidade populacional da carta 1;
densidade1 =  (float) populacao1 / area1;

//Fórmula para calcular o PIB PER CAPITA da cidade 1;
pibpercapita1 = (float) pib1 / populacao1; 


// AGORA O SISTEMA VAI RECEBER E GUARDAR OS DADOS DA CARTA 2;


// Recebendo e guardando informações da letra do estado da CARTA 2;
printf("Agora vamos inserir as informações da CARTA 2\n");
printf("Informe uma Letra de 'A' a 'H' para o Estado\n");
scanf(" %c", &estado2);

// Recebendo e guardando informações do código da CARTA 2 ;
printf("Informe o código da carta, 'A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)'\n");
scanf(" %s", &carta2);

// Recebendo e guardando informações do nome da cidade da CARTA 2;
printf("Informe o nome da cidade\n");
scanf(" %s", &cidade2);

// Recebendo e guardando informações do número de habitantes da cidade da CARTA 2;
printf("Informe o número de habitantes da cidade\n");
scanf(" %d", &populacao2);

// Recebendo e guardando a área da cidade em quilômetros quadrados da cidade da CARTA 2;
printf("Informe a área da cidade em quilômetros quadrados\n");
scanf(" %f", &area2);

// Recebendo e guardando o produto interno bruto da cidade da CARTA 2;
printf("Informe o Produto Interno Bruto (PIB)\n");
scanf(" %f", &pib2);

// Recebendo e guardando a quantidade de pontos turisticos da cidade da CARTA 2;
printf("Informe quantidade de pontos turísticos\n");
scanf(" %d", &pontosturisticos2);

// Fórmula  para calcular a densidade populacional da carta 2;
densidade2 = (float) populacao2 / area2;

// Fórmula para calcular o pib per capita da carta 2;
pibpercapita2 = (float) pib2 / populacao2;

//// ADICIONAR ESPAÇO ENTRE AS LINHAS PARA MELHOR VISALIZAÇÃO DAS INFORMAÇÕES;
printf("\n");

// AGORA O SISTEMA IRÁ MOSTRAR NA TELA AS INFORMAÇÔES QUE FORAM INSERIDOS PELO USUÁRIO NA SUA RESPECTIVA ORDEM;

// O SISTEMA MOSTRA INFORMAÇÕES DA CARTA 1;
printf("CARTA1:\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", carta1);
printf("Nome da Cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
printf("PIB PER CAPITA: %.2f reais\n", pibpercapita1);

// ADICIONA ESPAÇO ENTRE AS INFORMAÇÕES DA CARTA 1 E CARTA 2;
printf("\n");

// O SISTEMA MOSTRA INFORMAÇÕES DA CARTA 2;
printf("CARTA2:\n");
printf("Estado: %c\n" , estado2);
printf("Código: %s\n", carta2);
printf("Nome da Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
printf(" PIB PER CAPITA: %.2f reais", pibpercapita2);


return 0;


}