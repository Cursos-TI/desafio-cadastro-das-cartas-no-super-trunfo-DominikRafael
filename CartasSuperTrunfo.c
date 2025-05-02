#include <stdio.h>

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado1;
    char codigo1 [4];
    char cidade1 [50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Insira os dados da Carta 1: \n");

    printf("Digite o Estado: \n");
    scanf("%c", &estado1);

    printf("Digite o Código: \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite o número da População: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB; \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &pontos1);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    printf("Carta 1:");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %d\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n Km²", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    return 0;
}
