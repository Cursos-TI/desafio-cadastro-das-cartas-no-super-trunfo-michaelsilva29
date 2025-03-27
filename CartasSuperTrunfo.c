#include <stdio.h>

int main(){

// Declarando Variáveis;
char pais1[2], pais2[2];
char carta1[6], carta2[6];
char cidade1[20], cidade2[20];
int  pontosturisticos1, pontosturisticos2, atributo1, atributo2, resultado1, resultado2;
unsigned int populacao1, populacao2;
float area1, area2, pib1, pib2, densidade1, pibpercapita1, densidade2, pibpercapita2, superpoder1, superpoder2;

// Gera na tela uma  mensagem de boas vindas;
printf("SEJA BEM VINDO AO SUPERTRUNFO, DIVIRTA-SE!\n");

// Pula uma linha;
printf("\n");

// PRIMEIRO O SISTEMA VAI RECEBER E GUARDAR OS DADOS DA CARTA 1;

// Recebendo e guardando informações da letra do país da CARTA 1;
printf("Primeiro Vamos inserir as informações da CARTA 1\n");
printf("Informe uma Letra de 'A' a 'H' para o País\n");
scanf(" %s", pais1);

// Recebendo e guardando informações do código da CARTA 1 ;
printf("Informe o código da carta, 'A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)'\n");
scanf(" %s", &carta1);

// Recebendo e guardando informações do nome da cidade da CARTA 1;
printf("Informe o nome da cidade\n");
scanf(" %s", &cidade1);

// Recebendo e guardando informações do número de habitantes da cidade da CARTA 1;
printf("Informe o número de habitantes da cidade\n");
scanf(" %u", &populacao1);

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

//Fórmula para calcular o Super Poder;
superpoder1 = (float)populacao1 + (float)area1 + (float)pib1 + (float)pontosturisticos1 + (float)pibpercapita1 + 1.0 / (float)densidade1;


// AGORA O SISTEMA VAI RECEBER E GUARDAR OS DADOS DA CARTA 2;


// Recebendo e guardando informações da letra do país da CARTA 2;
printf("Agora vamos inserir as informações da CARTA 2\n");
printf("Informe uma Letra de 'A' a 'H' para o País\n");
scanf(" %s", pais2);

// Recebendo e guardando informações do código da CARTA 2 ;
printf("Informe o código da carta, 'A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)'\n");
scanf(" %s", &carta2);

// Recebendo e guardando informações do nome da cidade da CARTA 2;
printf("Informe o nome da cidade\n");
scanf(" %s", &cidade2);

// Recebendo e guardando informações do número de habitantes da cidade da CARTA 2;
printf("Informe o número de habitantes da cidade\n");
scanf(" %u", &populacao2);

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

//Fórmula para calcular o Super poder da carta 2;
superpoder2 = (float)populacao2 + (float)area2 + (float)pib2 + (float)pontosturisticos2 + (float)pibpercapita2 + 1.0 / (float)densidade2;

//// ADICIONAR ESPAÇO ENTRE AS LINHAS PARA MELHOR INDENTAÇÃO;
printf("\n");

// AGORA O SISTEMA IRÁ MOSTRAR NA TELA AS INFORMAÇÔES QUE FORAM INSERIDOS PELO USUÁRIO NA SUA RESPECTIVA ORDEM;

// O SISTEMA MOSTRA INFORMAÇÕES DA CARTA 1;
printf("CARTA1:\n");
printf("País: %s\n", pais1);
printf("Código: %s\n", carta1);
printf("Nome da Cidade: %s\n", cidade1);
printf("População: %u\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
printf("PIB PER CAPITA: %.2f reais\n", pibpercapita1);
printf("O Super poder é: %.2f\n", superpoder1);

// ADICIONA ESPAÇO ENTRE AS INFORMAÇÕES DA CARTA 1 E CARTA 2;
printf("\n");

// O SISTEMA MOSTRA INFORMAÇÕES DA CARTA 2;
printf("CARTA2:\n");
printf("País: %s\n" , pais2);
printf("Código: %s\n", carta2);
printf("Nome da Cidade: %s\n", cidade2);
printf("População: %u\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
printf("PIB PER CAPITA: %.2f reais\n", pibpercapita2);
printf("O Super poder é: %.2f\n", superpoder2);


// ADICIONA ESPAÇO ENTRE AS INFORMAÇÕES DA CARTA 1 E CARTA 2;
printf("\n");


// Menu para escolha de comparação do 1º atributo do usuário;
printf("Menu Interativo do Supertrunfo\n");
printf("Escolha o 1º atributo para comparação\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n"),
printf("4. Número de Pontos Turísticos\n");
printf("5. Densidade demográfica\n");
scanf("%d", &atributo1);

// Menu interativo para o usuário digitar sua opção;
switch (atributo1)
{
// Caso o usuário digite 1 esse bloco de comandos será executado;
case 1:
    resultado1 = populacao1 > populacao2 ? 1 : 0;

break;
// Caso o usuário digite 2 esse bloco de comandos será executado;
case 2:
    resultado1 = area1 > area2 ? 1 : 0;

break;
    // Caso o usuário digite 3 esse bloco de comandos será executado;
case 3:
    resultado1 = pib1 > pib2 ? 1 : 0;

break;
    // Caso o usuário digite 4 esse bloco de comandos será executado;
case 4:
    resultado1 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;

break;
    // Caso o usuário digite 5 esse bloco de comandos será executado;
case 5:
    resultado1 = densidade1 < densidade2 ? 1 : 0;

break;
    // Caso o usuário digite uma opção inválida o default será executado;
default:

    printf("Opção inválida, favor digitar opção correta\n");

break;

}

// ADICIONA ESPAÇO ENTRE AS INFORMAÇÕES DA CARTA 1 E CARTA 2;
printf("\n");

// Menu para escolha de comparação do 2º atributo do usuário;
printf("Menu Interativo do Supertrunfo\n");
printf("Escolha o 2º atributo para comparação\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n"),
printf("4. Número de Pontos Turísticos\n");
printf("5. Densidade demográfica\n");
scanf("%d", &atributo2);

// Condição para que o usuário não consiga selecioar o mesmo atributo anterior;
if (atributo1 == atributo2)
{
    printf("Você escolheu o mesmo atributo");
} else {                            // Se ele não selecionar o mesmo atributo o else será executado

    // Menu interativo para o usuário digitar sua opção;
    switch (atributo2)
    {
    // Caso o usuário digite 1 esse bloco de comandos será executado;
    case 1:
        resultado2 = populacao1 > populacao2 ? 1 : 0;

    break;
    // Caso o usuário digite 2 esse bloco de comandos será executado;
    case 2:
        resultado2 = area1 > area2 ? 1 : 0;

    break;
    // Caso o usuário digite 3 esse bloco de comandos será executado;
    case 3:
        resultado2 = pib1 > pib2 ? 1 : 0;

    break;
    // Caso o usuário digite 4 esse bloco de comandos será executado;
    case 4:
        resultado2 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;

    break;
    // Caso o usuário digite 5 esse bloco de comandos será executado;
    case 5:
        resultado2 = densidade1 < densidade2 ? 1 : 0;

    break;
    // Caso o usuário digite uma opção inválida o default será executado;
    default:

        printf("Opção inválida, favor digitar opção correta\n");

    break;

    }

    if ((resultado1 == 1) && (resultado2 == 1))
    {
        printf("Carta 1 venceu\n");

    } else if ((resultado1 == 0) && (resultado2 == 0))
    {
        printf("Carta 2 venceu\n");
    
    } else {
    
        printf("Deu Empate");

    }

}



return 0;

}