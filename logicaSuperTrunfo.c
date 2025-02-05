#include <stdio.h>

int main() { 
    // Estado A
    // Variaveis da cidade 01 
    char city01_code[4];
    char city01_name[50];
    int city01_population;
    float city01_area;
    float city01_pib;
    int city01_tourism;
    double city01_density;
    double city01_pib_per_capita;
    double city01_superpower;

    // Coletando informações da cidade 01
    printf("Digite o código da cidade 01: ");
    scanf("%s", city01_code);

    printf("Digite o nome da cidade 01: ");
    scanf("%s", city01_name);

    printf("Digite a população da cidade 01: ");
    scanf("%d", &city01_population);

    printf("Digite a área da cidade 01: ");
    scanf("%f", &city01_area);

    printf("Digite o PIB da cidade 01: ");
    scanf("%f", &city01_pib);

    printf("Digite o número de pontos turísticos da cidade 01: ");
    scanf(" %d", &city01_tourism);

    city01_density = city01_population / city01_area;
    city01_pib_per_capita = city01_pib / city01_population;
    city01_superpower = city01_pib_per_capita + city01_area + city01_tourism + city01_density + city01_population + city01_pib + city01_tourism; 

    // Mostrando informações da cidade 01
    printf("\nCidade 01\n");
    printf("Código: %s\n", city01_code);
    printf("Nome: %s\n", city01_name);
    printf("População: %d\n", city01_population);
    printf("Área: %.2f\n", city01_area);
    printf("PIB: %.2f\n", city01_pib);
    printf("Pontos turísticos: %d\n", city01_tourism);
    printf("Densidade: %.2f\n", city01_density);
    printf("PIB per capita: %.2f\n", city01_pib_per_capita);

    // Variáveis da cidade 02
    char city02_code[4];
    char city02_name[50];
    int city02_population;
    float city02_area;
    float city02_pib;
    int city02_tourism;
    double city02_density;
    double city02_pib_per_capita;
    double city02_superpower;

    // Coletando informações da cidade 02
    printf("\nDigite o código da cidade 02: ");
    scanf("%s", city02_code);

    printf("Digite o nome da cidade 02: ");
    scanf("%s", city02_name);

    printf("Digite a população da cidade 02: ");
    scanf("%d", &city02_population);

    printf("Digite a área da cidade 02: ");
    scanf("%f", &city02_area);

    printf("Digite o PIB da cidade 02: ");
    scanf("%f", &city02_pib);

    printf("Digite o número de pontos turísticos da cidade 02: ");
    scanf(" %d", &city02_tourism);
    
    city02_density = city02_population / city02_area;
    city02_pib_per_capita = city02_pib / city02_population;
    city02_superpower = city02_pib_per_capita + city02_area + city02_tourism + city02_density + city02_population + city02_pib + city02_tourism;

    // Mostrando informações da cidade 02
    printf("\nCidade 02\n");
    printf("Código: %s\n", city02_code);
    printf("Nome: %s\n", city02_name);
    printf("População: %d\n", city02_population);
    printf("Área: %.2f\n", city02_area);
    printf("PIB: %.2f\n", city02_pib);
    printf("Pontos turísticos: %d\n", city02_tourism);
    printf("Densidade: %.2f\n", city02_density);
    printf("PIB per capita: %.2f\n", city02_pib_per_capita);

    // Comparando todos os atributos das cidades
    if (city01_population > city02_population) {
        printf("\nA cidade 01 tem mais população do que a cidade 02\n");
    } else if (city01_population == city02_population) {
        printf("\nA cidade 01 e a cidade 02 tem a mesma população\n");
    } else {
        printf("\nA cidade 02 tem mais população do que a cidade 01\n");
    }

    if (city01_area > city02_area) {
        printf("A cidade 01 tem mais área do que a cidade 02\n");
    } else if (city01_area == city02_area) {
        printf("A cidade 01 e a cidade 02 tem a mesma área\n");
    } else {
        printf("A cidade 02 tem mais área do que a cidade 01\n");
    }

    if (city01_pib > city02_pib) {
        printf("A cidade 01 tem mais PIB do que a cidade 02\n");
    } else if (city01_pib == city02_pib) {
        printf("A cidade 01 e a cidade 02 tem o mesmo PIB\n");
    } else {
        printf("A cidade 02 tem mais PIB do que a cidade 01\n");
    }

    if (city01_tourism > city02_tourism) {
        printf("A cidade 01 tem mais pontos turísticos do que a cidade 02\n");
    } else if (city01_tourism == city02_tourism) {
        printf("A cidade 01 e a cidade 02 tem o mesmo número de pontos turísticos\n");
    } else {
        printf("A cidade 02 tem mais pontos turísticos do que a cidade 01\n");
    }

    if (city01_density < city02_density) {
        printf("A cidade 01 tem menos densidade do que a cidade 02\n");
    } else if (city01_density == city02_density) {
        printf("A cidade 01 e a cidade 02 tem a mesma densidade\n");
    } else {
        printf("A cidade 02 tem menos densidade do que a cidade 01\n");
    }

    if (city01_pib_per_capita > city02_pib_per_capita) {
        printf("A cidade 01 tem mais PIB per capita do que a cidade 02\n");
    } else if (city01_pib_per_capita == city02_pib_per_capita) {
        printf("A cidade 01 e a cidade 02 tem o mesmo PIB per capita\n");
    } else {
        printf("A cidade 02 tem mais PIB per capita do que a cidade 01\n");
    }

    if (city01_superpower > city02_superpower) {
        printf("A cidade 01 tem mais superpoder do que a cidade 02\n");
    } else if (city01_superpower == city02_superpower) {
        printf("A cidade 01 e a cidade 02 tem o mesmo superpoder\n");
    } else {
        printf("A cidade 02 tem mais superpoder do que a cidade 01\n");
    }
    return 0;
}
 
