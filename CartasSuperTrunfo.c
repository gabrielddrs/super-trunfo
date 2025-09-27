#include <stdio.h>
#include <unistd.h> // usleep
#include <stdlib.h>

// Estrutura que representa uma carta
typedef struct
{
    char estado;
    char codigo[4];
    char cidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
    float pibPerCapita;
    float superPoder;
} Carta;

// Função para ler os dados de uma carta
void lerCarta(Carta *carta, int numCarta)
{
    printf("\033[1;34mCadastro da Carta %d:\033[0m\n", numCarta);
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &carta->estado);
    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", carta->codigo);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", carta->cidade);
    printf("Digite a População: ");
    scanf("%lu", &carta->populacao);
    printf("Digite a Área (km²): ");
    scanf("%f", &carta->area);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &carta->pib);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
    printf("\n");
}

// Função para calcular densidade, PIB per capita e Super Poder
void calcularAtributos(Carta *carta)
{
    carta->densidade = carta->populacao / carta->area;
    carta->pibPerCapita = carta->pib * 1e9 / carta->populacao;
    carta->superPoder = carta->populacao + carta->area + carta->pib + carta->pontosTuristicos + carta->pibPerCapita + (1.0 / carta->densidade);
}

// Função para comparar dois atributos (maior vence, exceto densidade)
int comparar(float a1, float a2, int menorVence)
{
    if (menorVence)
    {
        return (a1 < a2) ? 1 : 0;
    }
    else
    {
        return (a1 > a2) ? 1 : 0;
    }
}

// Função para animação de batalha
void animacaoBatalha()
{
    printf("\033[1;33mPreparando a Batalha...\033[0m\n");
    for (int i = 0; i < 20; i++)
    {
        printf(".");
        fflush(stdout);
        usleep(100000); 
    }
    printf("\n\033[1;32mBatalha Iniciada!\033[0m\n\n");
}

// Função para exibir resultados da batalha com cores
void exibirComparacoes(Carta c1, Carta c2)
{
    animacaoBatalha();

    int vPopulacao = comparar(c1.populacao, c2.populacao, 0);
    int vArea = comparar(c1.area, c2.area, 0);
    int vPIB = comparar(c1.pib, c2.pib, 0);
    int vPontos = comparar(c1.pontosTuristicos, c2.pontosTuristicos, 0);
    int vDensidade = comparar(c1.densidade, c2.densidade, 1);
    int vPibPerCapita = comparar(c1.pibPerCapita, c2.pibPerCapita, 0);
    int vSuperPoder = comparar(c1.superPoder, c2.superPoder, 0);

    printf("==== RESULTADOS DA BATALHA ====\n\n");

    printf("População: %s venceu (%d)\n", vPopulacao ? "\033[1;32mCarta 1\033[0m" : "\033[1;31mCarta 2\033[0m", vPopulacao);
    printf("Área: %s venceu (%d)\n", vArea ? "\033[1;32mCarta 1\033[0m" : "\033[1;31mCarta 2\033[0m", vArea);
    printf("PIB: %s venceu (%d)\n", vPIB ? "\033[1;32mCarta 1\033[0m" : "\033[1;31mCarta 2\033[0m", vPIB);
    printf("Pontos Turísticos: %s venceu (%d)\n", vPontos ? "\033[1;32mCarta 1\033[0m" : "\033[1;31mCarta 2\033[0m", vPontos);
    printf("Densidade Populacional: %s venceu (%d)\n", vDensidade ? "\033[1;32mCarta 1\033[0m" : "\033[1;31mCarta 2\033[0m", vDensidade);
    printf("PIB per Capita: %s venceu (%d)\n", vPibPerCapita ? "\033[1;32mCarta 1\033[0m" : "\033[1;31mCarta 2\033[0m", vPibPerCapita);
    printf("Super Poder: %s venceu (%d)\n", vSuperPoder ? "\033[1;32mCarta 1\033[0m" : "\033[1;31mCarta 2\033[0m", vSuperPoder);

    printf("\n===============================\n");
}

int main()
{
    Carta carta1, carta2;

    // Leitura das cartas
    lerCarta(&carta1, 1);
    lerCarta(&carta2, 2);

    // Cálculo de atributos
    calcularAtributos(&carta1);
    calcularAtributos(&carta2);

    // Exibição das comparações
    exibirComparacoes(carta1, carta2);

    return 0;
}