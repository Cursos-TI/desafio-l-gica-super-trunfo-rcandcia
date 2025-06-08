#include <stdio.h>
#include <string.h>

int main()
{

    char estado[50];
    char estado2[50];
    char codigo_da_carta[5];
    char codigo_da_carta2[5];
    char cidade[50];
    char cidade2[50];
    int populacao = 0;
    int populacao2 = 0;
    float area = 0;
    float area2 = 0;
    float pib = 0;
    float pib2 = 0;
    int pontos_turisticos = 0;
    int pontos_turisticos2 = 0;
    float pibpcapita = 10;
    float pibpcapita2 = 10;
    float densidadep1 = 10;
    float densidadep2 = 10;

    // Lendo informações de cadastro de carta
   
    printf("----------Lendo os dados da carta 1 --------------\n");

    printf("Informe seu estado: ");
    fgets(estado, sizeof(estado), stdin);
    estado[strcspn(estado,"\n")] = '\0';

    printf("Nome da Cidade: ");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade,"\n")] = '\0';

    printf("Código da Carta: ");
    scanf(" %s", codigo_da_carta);

    printf("População: ");
    scanf(" %d", &populacao);

    printf("Área Territorial: ");
    scanf(" %e", &area);

    printf("PIB: ");
    scanf(" %e", &pib);

    printf("Número de Pontos Tútisticos: ");
    scanf(" %d", &pontos_turisticos);

    while (getchar() != '\n' && !feof(stdin));

    // Lendo informações de carta 2
    printf("----------Lendo os dados da carta 2 --------------\n");

    printf("Informe seu estado 2: ");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2,"\n")] = '\0';

    printf("Nome da Cidade 2: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2,"\n")] = '\0';

    printf("Código da Carta 2: ");
    scanf(" %s", codigo_da_carta2);

    printf("População 2: ");
    scanf(" %d", &populacao2);

    printf("Área Territorial 2: ");
    scanf(" %e", &area2);

    printf("PIB 2: ");
    scanf(" %e", &pib2);

    printf("Número de Pontos Tútisticos 2: ");
    scanf(" %d", &pontos_turisticos2);

    // Mostrando as informações cadastradas
    printf("xxxxxxxxxxxxxxXXXXXXX Confira os dados carta 1 XXXXXXXxxxxxxxxxxxxxxxxxxxx\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigo_da_carta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Papulação: %d\n", populacao);
    printf("Área Territorial: %.2f Km\n", area);
    printf("PIB: %.2f Bilhões de Reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    
    printf("xxxxxxxxxxxxxxXXXXXXX Confira os dados carta 2 XXXXXXXxxxxxxxxxxxxxxxxxxxx\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Papulação: %d\n", populacao2);
    printf("Área Territorial: %.2f Km\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    
    printf("xxxxxxxxxxxxxxXXXXXXX Densidade Populacional e PIB P/Capita XXXXXXXxxxxxxxxxxxxxxxxxxxx\n");
    
    // Calculando Densidade Populacional
    densidadep1 = populacao / area;
    densidadep2 = populacao2 / area2;
    printf("Densidade populacional da carta 1 é:%d\n", densidadep1);
    printf("Densidade populacional da carta 2 é:%d\n", densidadep2);


    //Calculando PIB per Capita e mostrando seus valores
    pibpcapita = pib / populacao;
    pibpcapita2 = pib2 / populacao2;
    printf("PIB P/CAPITA da carta 1 é R$ %f\n", pibpcapita);
    printf("PIB P/CAPITA da carta 2 é R$ %f\n",pibpcapita2);


    // Comparando as cartas por PIB P/Capita
    printf("xxxxxxxxxxxxxxXXXXXXXXXXXXX Mostrando Carta vencedora XXXXXXXXXXXXXXXxxxxxxxxxxxxxxxxxxxx\n");
    
    if (pibpcapita < pibpcapita2)
    {
        printf("carta 2 COD:%s É A VENCEDORA !!!!!\nCidade de(o): %s, pois a renda percápita é R$ %.2f enquanto a carta 1 é R$ %.2f\n", codigo_da_carta2, cidade2, pibpcapita2, pibpcapita);
    }
    else
    {
        printf("Carta 1 COD:%s É A VENCEDORA !!!!\nCidade de(o): %s, pois a renda percápita é R$ %.2f enquanto a carta 2 é R$ %.2f\n", codigo_da_carta, cidade, pibpcapita, pibpcapita2);
    }
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");

    return 0;


    
    return 0;

}
