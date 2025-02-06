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
    printf("Superpoder: %.2f\n", city01_superpower);

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
    printf("Superpoder: %.2f\n", city02_superpower);

    // Menu de opções
    int choice01, choice02;
    printf("\nEscolha dois atributos para comparação:\n");
    printf("\nEscolha uma opção:\n");
    printf("1 - Comparar população\n");
    printf("2 - Comparar área\n");
    printf("3 - Comparar PIB\n");
    printf("4 - Comparar pontos turísticos\n");
    printf("5 - Comparar densidade\n");
    printf("6 - Comparar PIB per capita\n");
    printf("7 - Comparar superpoder\n");    
    printf("Digite o primeiro atributo: ");
    scanf("%d", &choice01);
    printf("Digite o segundo atributo: ");
    scanf("%d", &choice02);

    float city01_value01, city02_value01, city01_value02, city02_value02;

    switch (choice01)
    {
    case 1:
        city01_value01 = city01_population;
        city02_value01 = city02_population;
        break;
    case 2:
        city01_value01 = city01_area;
        city02_value01 = city02_area;
        break;
    case 3:
        city01_value01 = city01_pib;
        city02_value01 = city02_pib;
        break;
    case 4:
        city01_value01 = city01_tourism;
        city02_value01 = city02_tourism;
        break;
    case 5:
        city01_value01 = city01_density;
        city02_value01 = city02_density;
        break;
    case 6:
        city01_value01 = city01_pib_per_capita;
        city02_value01 = city02_pib_per_capita;
        break;
    case 7:
        city01_value01 = city01_superpower;
        city02_value01 = city02_superpower;
        break;
    }

    switch (choice02)
    {
    case 1:
        city01_value02 = city01_population;
        city02_value02 = city02_population;
        break;
    case 2:
        city01_value02 = city01_area;
        city02_value02 = city02_area;
        break;
    case 3:
        city01_value02 = city01_pib;
        city02_value02 = city02_pib;
        break;
    case 4:
        city01_value02 = city01_tourism;
        city02_value02 = city02_tourism;
        break;
    case 5:
        city01_value02 = city01_density;
        city02_value02 = city02_density;
        break;
    case 6:
        city01_value02 = city01_pib_per_capita;
        city02_value02 = city02_pib_per_capita;
        break;
    case 7:
        city01_value02 = city01_superpower;
        city02_value02 = city02_superpower;
        break;
    }
    
    //Verificando o vencedor
    if ((city01_value01 > city02_value01 && city01_value02 > city02_value02) ||
        (city01_value01 > city02_value01 && city01_value02 == city02_value02) ||
        (city01_value01 == city02_value01 && city01_value02 > city02_value02))
    {
        printf("\n%s é a vencedora!\n", city01_name);
    }
    else if (city01_value01 == city02_value01 && city01_value02 == city02_value02)
    {
        printf("\nEmpate!\n");
    }
    else
    {
        printf("\n%s é a vencedora!\n", city02_name);
    }

    return 0;
}
 
