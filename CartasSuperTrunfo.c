#include <stdio.h>

//Definind as estruturas
typedef struct {
    char estado;
    char codigo[5];
    char nomedacidade[50];
    float populacao;
    float  area;
    float pib;
    int pontosturisticos;
    float densidade;
    float pibpercapita;
} Carta;

int main() {
    Carta c1, c2;

    // Cadastro da carta 1 pelo jogador

    printf("-=-=-=-=-CARTA1-=-=-=-=- ,\n");

    printf("Digite o Estado (de A - H): ");
    scanf(" %c", &c1.estado);

    printf("Digite o Código (A letra do estado seguida de um número de 01 a 04): ");
    scanf("%s", c1.codigo);

    // Lê tudo até o Enter, lê inclusive espaço a função "%[^\n]s"
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", c1.nomedacidade);

    printf("Digite a população: ");
    scanf("%f", &c1.populacao);

    printf("Digite a area (em KM²): ");
    scanf("%f", &c1.area);

    printf("Digite o PIB: ");
    scanf("%f", &c1.pib);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &c1.pontosturisticos);

    c1.densidade = c1.populacao / c1.area;

    c1.pibpercapita = c1.pib / c1.populacao;

    // Cadastro da carta 2 pelo jogador

    printf("-=-=-=-=-CARTA2-=-=-=-=- ,\n");

    printf("Digite o Estado (de A - H): ");
    scanf(" %c", &c2.estado);

    printf("Digite o Código (A letra do estado seguida de um número de 01 a 04): ");
    scanf("%s", c2.codigo);

    // Lê tudo até o Enter, lê inclusive espaço a função "%[^\n]s"
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", c2.nomedacidade);

    printf("Digite a população: ");
    scanf("%f", &c2.populacao);

    printf("Digite a area (em KM²): ");
    scanf("%f", &c2.area);

    printf("Digite o PIB: ");
    scanf("%f", &c2.pib);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &c2.pontosturisticos);

    c2.densidade = c2.populacao / c2.area;

    c2.pibpercapita = c2.pib / c2.populacao;
    

    //Exibição dos dados inputados da carta1;
    printf("-=-=-=-=-CARTA1-=-=-=-=- ,\n");
    printf("Estado: %c\n", c1.estado);
    printf("Código: %s\n", c1.codigo);
    printf("Cidade: %s\n", c1.nomedacidade);
    printf("População: %f\n", c1.populacao);
    printf("Area: %f\n", c1.area);
    printf("Pontos turisticos: %d\n", c1.pontosturisticos);
    printf("Densidade Populacional: %.2f\n", c1.densidade);
    printf("PIB per Capita:%f\n", c1.pibpercapita);

    //Exibição dos dados inputados da carta2;
    printf("-=-=-=-=-CARTA2-=-=-=-=- ,\n");
    printf("Estado: %c\n", c2.estado);
    printf("Código: %s\n", c2.codigo);
    printf("Cidade: %s\n", c2.nomedacidade);
    printf("População: %f\n", c2.populacao);
    printf("Area: %f\n", c2.area);
    printf("Pontos turisticos: %d\n", c2.pontosturisticos);
    printf("Densidade Populacional: %.2f\n", c2.densidade);
    printf("PIB per Capita:%f\n", c2.pibpercapita);
    return 0;

}