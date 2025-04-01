#include <stdio.h>

int main() {
    
    printf("Desafio Super Trunfo - Países\n");

    int pontotur1, pontotur2, populacao1, populacao2;
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char municipio1[50], municipio2[50];
    float area1, area2, pib1, pib2;

    //Digitar somente uma letra maiúscula para definir o Estado de interesse, em um total de 8 Estados.
    printf("Digite um código para o Estado (uma letra entre A e H): ");
        scanf(" %c", &estado1);
    
    //O código é alfanumérico por isso, a letra identificando o Estado e dois números identificando o Município.
    //A letra deve ser maiúscula entre A e H, e o número é entre 01 a 04.
    printf("Digite um código para Município (letra do Estado e número de 01 a 04 para o Município): ");
        scanf("%s", codigo1);
    
    //Definir o nome de um Município dentro do Estado escolhido. Um testo por extesno e sem espaço entre 
    //no nome do Município.
    printf("Digite o nome de um município do Estado (por extenso e sem espaço): ");
        scanf("%s", municipio1);
    
    //Digitar a quantidade total da população do Município selecionado. Deve ser número inteiro.
    printf("Digite a população do Município (quantidade total de habitantes): ");
        scanf("%i", &populacao1);
    
    //Digitar a extensão territorial, ou área, em km² do município escolhido, devendo haver
    //duas casa decimais.
    printf("Digite a área do Município (extensão territorial): ");
        scanf("%f", &area1);
        
    //Digite o valor do Produto Interno Bruto do Município escolhido, lembrando que deve ser digitado
    //com duas casas decimais
    printf("Digite o PIB do Município (Produto Interno Bruto): ");
        scanf("%f", &pib1);

    //Digitar a quantidade de pontos turísticos. Constar é número inteiro.
    printf("Digite quantos pontos turísticos o Município possui: ");
        scanf("%i", &pontotur1);
    
    
    //Digitar novamente uma letra maiúscula para definir o Estado de interesse, identificando um segundo Estado.
    printf("Digite um código para o Estado (uma letra entre A e H): ");
        scanf(" %c", &estado2);
    
    //Digitar um segundo código alfanumérico. São uma letra maiúscula e dois numerais.
    printf("Digite um código para Município (letra do Estado e número de 01 a 04 para o Município): ");
        scanf("%s", codigo2);
    
    //Defina o nome de um segundo Município dentro do Estado escolhido. Constar por extenso e sem espaço.
    printf("Digite o nome de um município do Estado (por extenso e sem espaço): ");
        scanf("%s", municipio2);
    
    //Digitar a população do segundo município escolhido.
    printf("Digite a população do Município (quantidade total de habitantes): ");
        scanf("%i", &populacao2);
    
    //Digitar a extensão territorial, ou área, em km² do município escolhido.
    printf("Digite a área do Município (extensão territorial): ");
        scanf("%f", &area2);
         
    //Digite o valor do PIB. Digitar com duas casas decimais.
    printf("Digite o PIB do Município (Produto Interno Bruto): ");
        scanf("%f", &pib2);

    //Digitar a quantidade de pontos turísticos. Constar é número inteiro.
    printf("Digite quantos pontos turísticos o Município possui: ");
        scanf("%i", &pontotur2);
    
    printf("\n");

        printf("Desafio Super Trunfo - Países\n");

    printf("\n");

        printf("CARTA 01\n");
        printf("Estado: %c\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Nome da Cidade: %s\n", municipio1);
        printf("População: %i hab.\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: R$ %.2f\n", pib1);
        printf("Número de Pontos Turísticos: %i locais\n", pontotur1);

    printf("\n");

        printf("CARTA 02\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Nome da Cidade: %s\n", municipio2);
        printf("População: %i hab.\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: R$ %.2f\n", pib2);
        printf("Número de Pontos Turísticos: %i locais\n", pontotur2);
        
    printf("\n");


    return 0;
}
