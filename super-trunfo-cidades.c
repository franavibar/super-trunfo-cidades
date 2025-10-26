#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int populacao;
    double pib_per_capita;
    int pontos_turisticos;
    double area_km2;
} Carta;

void mostrar_cartas(Carta c1, Carta c2) {
    printf("\n------------------------------------------------\n");
    printf("| Jogador 1 (Voce) | Jogador 2 (CPU) |\n");
    printf("------------------------------------------------\n");
    printf("| Cidade: %-10s | Cidade: %-10s |\n", c1.nome, c2.nome);
    printf("| 1. Populacao: %-7d | 1. Populacao: %-7d |\n", c1.populacao, c2.populacao);
    printf("| 2. PIB/Capita: %-7.2lf | 2. PIB/Capita: %-7.2lf |\n", c1.pib_per_capita, c2.pib_per_capita);
    printf("| 3. Pontos Turisticos: %-7d | 3. Pontos Turisticos: %-7d |\n", c1.pontos_turisticos, c2.pontos_turisticos);
    printf("| 4. Area (km2): %-7.0lf | 4. Area (km2): %-7.0lf |\n", c1.area_km2, c2.area_km2);
    printf("------------------------------------------------\n");
}

int main() {
    int escolha_desafio;
    int atributo;
    int venceu = 0;

    Carta carta_jogador = {"Rio", 6700, 15000.0, 35, 1200.0};
    Carta carta_cpu = {"SaoPaulo", 12300, 18500.0, 18, 1500.0};

    printf("====================================================\n");
    printf(" SIMULADOR SUPER TRUNFO TECHNOVA - ESCOLHA O DESAFIO\n");
    printf("====================================================\n");
    printf("1. Desafio 1: Comparacao Simples (IF / IF-ELSE)\n");
    printf("2. Desafio 2: Comparacao Multipla (IF-ELSE IF / SWITCH)\n");
    printf("3. Desafio 3: Comparacao Complexa (Operador Ternario)\n");
    printf("Escolha uma opcao (1, 2 ou 3): ");
    scanf("%d", &escolha_desafio);

    mostrar_cartas(carta_jogador, carta_cpu);

    switch (escolha_desafio) {
        
        case 1:
            printf("\n--- DESAFIO 1: Comparacao de POPULACAO (IF/IF-ELSE) ---\n");
            printf("Voce escolhe POPULACAO (1). Vamos ver quem vence!\n");

            if (carta_jogador.populacao > carta_cpu.populacao) {
                printf("Seu valor de Populacao (%d) e MAIOR que o da CPU (%d).\n",
                       carta_jogador.populacao, carta_cpu.populacao);
                printf(">>> Voce VENCEU a rodada! (Usando IF)\n");
            } else {
                printf("Seu valor de Populacao (%d) nao e maior que o da CPU (%d).\n",
                       carta_jogador.populacao, carta_cpu.populacao);
                printf(">>> Voce PERDEU ou EMPATOU a rodada! (Usando IF-ELSE)\n");
            }
            break;

        case 2:
            printf("\n--- DESAFIO 2: Comparacao Multipla (SWITCH + IF-ELSE IF) ---\n");
            printf("Escolha o atributo para a batalha (1 a 4):\n");
            printf("Atributo: ");
            scanf("%d", &atributo);

            switch (atributo) {
                case 1:
                    printf("Comparando: Populacao\n");
                    if (carta_jogador.populacao > carta_cpu.populacao) {
                        printf("VITORIA! Sua Populacao e maior.\n");
                    } else if (carta_jogador.populacao < carta_cpu.populacao) {
                        printf("DERROTA! Sua Populacao e menor.\n");
                    } else {
                        printf("EMPATE! As populacoes sao iguais.\n");
                    }
                    break;
                
                case 2:
                    printf("Comparando: PIB per Capita\n");
                    if (carta_jogador.pib_per_capita > carta_cpu.pib_per_capita) {
                        printf("VITORIA! Seu PIB/Capita e maior.\n");
                    } else if (carta_jogador.pib_per_capita < carta_cpu.pib_per_capita) {
                        printf("DERROTA! Seu PIB/Capita e menor.\n");
                    } else {
                        printf("EMPATE! Os PIBs sao iguais.\n");
                    }
                    break;

                case 3:
                    printf("Comparando: Pontos Turisticos\n");
                    if (carta_jogador.pontos_turisticos >
