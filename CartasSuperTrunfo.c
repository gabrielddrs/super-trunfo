#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[30];
    int populacao;
    float area;
    float pib;
    float pibPerCapita;
    float densidadeDemografica;
} Carta;

void mostrarMenuAtributos(int excluido)
{
    printf("\nEscolha um atributo:\n");
    if (excluido != 1)
        printf("1 - População\n");
    if (excluido != 2)
        printf("2 - Área\n");
    if (excluido != 3)
        printf("3 - PIB\n");
    if (excluido != 4)
        printf("4 - PIB per Capita\n");
    if (excluido != 5)
        printf("5 - Densidade Demográfica\n");
    printf("Escolha: ");
}

float pegarValorAtributo(Carta c, int atributo)
{
    switch (atributo)
    {
    case 1:
        return c.populacao;
    case 2:
        return c.area;
    case 3:
        return c.pib;
    case 4:
        return c.pibPerCapita;
    case 5:
        return c.densidadeDemografica;
    default:
        return 0;
    }
}

const char *nomeAtributo(int atributo)
{
    switch (atributo)
    {
    case 1:
        return "População";
    case 2:
        return "Área";
    case 3:
        return "PIB";
    case 4:
        return "PIB per Capita";
    case 5:
        return "Densidade Demográfica";
    default:
        return "";
    }
}

int main()
{
    Carta c1 = {"Brasil", 214000000, 8515767, 1847000000000, 8620, 25.1};
    Carta c2 = {"Japão", 125000000, 377975, 4937000000000, 39496, 330.8};

    int atributo1, atributo2;

    printf("Comparando cartas de %s e %s!\n", c1.nome, c2.nome);

    mostrarMenuAtributos(0);
    scanf("%d", &atributo1);

    mostrarMenuAtributos(atributo1);
    scanf("%d", &atributo2);

    float valorC1A1 = pegarValorAtributo(c1, atributo1);
    float valorC2A1 = pegarValorAtributo(c2, atributo1);

    float valorC1A2 = pegarValorAtributo(c1, atributo2);
    float valorC2A2 = pegarValorAtributo(c2, atributo2);

    int vencedorA1 = (atributo1 == 5) ? (valorC1A1 < valorC2A1 ? 1 : 2) : (valorC1A1 > valorC2A1 ? 1 : 2);

    int vencedorA2 = (atributo2 == 5) ? (valorC1A2 < valorC2A2 ? 1 : 2) : (valorC1A2 > valorC2A2 ? 1 : 2);

    float somaC1 = valorC1A1 + valorC1A2;
    float somaC2 = valorC2A1 + valorC2A2;

    int vencedorFinal = (somaC1 > somaC2) ? 1 : (somaC2 > somaC1 ? 2 : 0);

    printf("\n===== RESULTADO =====\n");
    printf("Comparação entre %s e %s\n", c1.nome, c2.nome);

    printf("\nAtributo 1: %s\n", nomeAtributo(atributo1));
    printf("%s: %.2f | %s: %.2f --> Vencedor: %s\n",
           c1.nome, valorC1A1, c2.nome, valorC2A1,
           vencedorA1 == 1 ? c1.nome : c2.nome);

    printf("\nAtributo 2: %s\n", nomeAtributo(atributo2));
    printf("%s: %.2f | %s: %.2f --> Vencedor: %s\n",
           c1.nome, valorC1A2, c2.nome, valorC2A2,
           vencedorA2 == 1 ? c1.nome : c2.nome);

    printf("\nSomas:\n");
    printf("%s: %.2f\n", c1.nome, somaC1);
    printf("%s: %.2f\n", c2.nome, somaC2);

    if (vencedorFinal == 0)
    {
        printf("\nResultado Final: Empate!\n");
    }
    else
    {
        printf("\nResultado Final: %s venceu!\n",
               vencedorFinal == 1 ? c1.nome : c2.nome);
    }

    return 0;
}