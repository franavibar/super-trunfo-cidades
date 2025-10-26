#include <stdio.h>
#include <stdlib.h>

int main() {
    char estado[50];
    char nome_cidade[100];
    int codigo_cidade;

    long populacao;
    double pib_total;
    double area_km2;
    int pontos_turisticos;

    double densidade_populacional;
    double pib_per_capita;
    
    printf("====================================================\n");
    printf(" CADASTRO DE CARTA SUPER TRUNFO - PAISES (CIDADES)\n");
    printf("====================================================\n");
    
    printf("\nDigite o ESTADO (ex: SP, RJ, etc): ");
    scanf("%s", estado);
    
    printf("Digite o CODIGO da cidade (ex: 12345): ");
    scanf("%d", &codigo_cidade);
    
    printf("Digite o NOME da cidade (use underline se houver espaco, ex: Rio_de_Janeiro): ");
    scanf("%s", nome_cidade);
    
    printf("Digite a POPULACAO total (ex: 6000000): ");
    scanf("%ld", &populacao);
    
    printf("Digite o PIB TOTAL (em milhoes, ex: 500.50): ");
    scanf("%lf", &pib_total);
    
    printf("Digite a AREA da cidade em km2 (ex: 1200.75): ");
    scanf("%lf", &area_km2);
    
    printf("Digite o NUMERO de pontos turisticos (ex: 15): ");
    scanf("%d", &pontos_turisticos);
    
    printf("\nProcessando calculos...");
    
    densidade_populacional = (double)populacao / area_km2;
    pib_per_capita = pib_total / (double)populacao;
    
    printf("\n\n****************************************************\n");
    printf("             CARTA SUPER TRUNFO CADASTRADA\n");
    printf("****************************************************\n");
    
    printf("\n-- INFORMACOES BASICAS --\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %d\n", codigo_cidade);
    printf("Cidade: %s\n", nome_cidade);
    
    printf("\n-- ATRIBUTOS DE JOGO --\n");
    
    printf("1. Populacao:            %ld habitantes\n", populacao);
    printf("2. PIB Total:            %.2lf milhoes\n", pib_total);
    printf("3. Area:                 %.2lf km2\n", area_km2);
    printf("4. Pontos Turisticos:    %d pontos\n", pontos_turisticos);
    
    printf("\n-- ATRIBUTOS DERIVADOS (Bonus!) --\n");
    
    printf("5. Densidade Populacional: %.4lf hab/km2\n", densidade_populacional);
    printf("6. PIB per Capita:         %.2lf\n", pib_per_capita);
    
    printf("\n****************************************************\n");
    
    return 0;
}