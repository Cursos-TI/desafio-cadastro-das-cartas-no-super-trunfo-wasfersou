#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int carta;
    int populacao;
    int numero_de_pontos_turisticos;
    float area;
    float pib;
    char estado;
    char nome_da_cidade[20];
    char codigo_da_cidade[3];

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf ("Carta: 1 \n");
    printf ("Estado: A \n");
    printf ("Código: A01 \n");
    printf ("Nome da Cidade: São Paulo \n");
    printf ("População: 12325000 \n");
    printf ("Área: 1521.11 km² \n");
    printf ("PIB: 699.28 bilhões de reais \n");
    printf ("Número de Pontos Turísticos: 50 \n");
    
    printf ("\n");

    printf ("Carta: 2 \n");
    printf ("Estado: B \n");
    printf ("Código: B02 \n");
    printf ("Nome da Cidade: Rio de Janeiro \n");
    printf ("População: 6748000 \n");
    printf ("Área: 1200.25 km² \n");
    printf ("PIB: 300.50 bilhões de reais \n");
    printf ("Número de Pontos Turísticos: 30 \n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;


}
