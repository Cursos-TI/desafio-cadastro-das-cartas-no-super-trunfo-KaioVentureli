#include <stdio.h>//Biblioteca padrão de entrada e saída
int main() {
    //Carta1:
    char estado1[2];
    char codigo1[3];//código da carta1
    char nome1[15];//nome da cidade1 da carta 
    int populaçao1;//população da cidade1
    float area1;//área da cidade 1
    float pib1;//Pib da cidade 1
    int pontos1;//pontos turisticos da cidade 1
    //Carta2:
    char estado2[2];
    char codigo2[3];
    char nome2[15];
    int populaçao2;
    float area2;
    float pib2;
    int pontos2;

    //Solicitação dos Estados:
    printf("Informe o Estado da Carta1:\n");
    scanf("%s",&estado1);
    printf("Informe o Estado da Carta2:\n");
    scanf("%s",&estado2);
    //Solicitação do Código da Cartas:
    printf("Informe o código da Carta1:\n");
    scanf("%s",&codigo1);
    printf("Informe o código da Carta2:\n");
    scanf("%s",&codigo2);
    //Solicitação dos nomes das cidades:
    printf("Informe o nome da cidade1:\n");
    scanf("%s",&nome1);
    printf("Informe o nome da cidade2:\n");
    scanf("%s",&nome2);
    //Solicitação da população das cidades:
    printf("Informe a população da cidade1:\n");
    scanf("%d",&populaçao1);
    printf("Informe a população da cidade2:\n");
    scanf("%d",&populaçao2);
    //Solicitação da Área das cidades:
    printf("Informe a área da cidade1:\n");
    scanf("%f",&area1);
    printf("Informe a área da cidade2:\n");
    scanf("%f",&area2);
    //Solicitação do Pib:
    printf("Informe o Pib da cidade 1:\n");
    scanf("%f",&pib1);
    printf("Informe o Pib da cidade 2:\n");
    scanf("%f",&pib2);
    //Solicitação dos pontos turisticos das cidades:
    printf("Informe a quantidade de pontos turisticos na cidade1:\n");
    scanf("%d",&pontos1);
    printf("Informe a quantidade de pontos turisticos na cidade2:\n");
    scanf("%d",&pontos2);
    
    //Declarações finais no terminal:
    printf("O estado da carta 1 é:%s \n",estado1);
    printf("O estado da carta 2 é:%s \n",estado2);
    printf("O código da carta 1 é:%s \n",codigo1);
    printf("O código da carta 2 e:%s \n",codigo2);
    printf("O nome da cidade 1 é:%s",nome1);
    printf("O nome da cidade 2 é:%s",nome2);
    printf("A população da cidade 1 é:%d",populaçao1);
    printf("A população da cidade 2 é:%d",populaçao2);
    printf("A área da cidade 1 é:%f",area1);
    printf("A área da cidade 2 é:%f",area2);
    printf("O Pib da cidade 1 é:%f",pib1);
    printf("O Pib da cidade 2 é:%f",pib2);
    printf("A quantidade de pontos turisticos da cidade1 é:%d",pontos1);
    printf("A quantidade de pontos turisticos da cidade 2 é:%d",pontos2);



return 0;
}
