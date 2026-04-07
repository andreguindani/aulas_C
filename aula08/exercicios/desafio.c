// Atividade:
// Uma empresa de fornecimento de energia elétrica faz a leitura mensal dos medidores de consumo. Para cada consumidor, são digitados os seguintes dados:
// •	número do consumidor
// •	quantidade de kWh consumidos durante o mês
// •	tipo (código) do consumidor
// 1 – residencial, preço em reais por kWh = 0,3
// 2 – comercial, preço em reais por kWh = 0,5
// 3 – industrial, preço em reais por kWh = 0,7
// Os dados devem ser lidos até que seja encontrado um consumidor com número 0 (zero). Calcular e imprimir:
// •	o custo total para cada consumidor
// •	o total de consumo para os três tipos de consumidor
// •	a média de consumo dos tipos 1 e 2
// ALUNOS: André Nascimento e André Kolett Guindani

#include <stdio.h>

int main() {
    int numero[100], tipo[100], i = 0;
    float kwh[100], custo[100];
    int op;
    int qtd_residencial = 0, qtd_comercial = 0;

    float total_residencial = 0, total_comercial = 0, total_industrial = 0;
    float media_residencial = 0, media_comercial = 0;

    while (1) {
        printf("Digite o numero do consumidor (0 para finalizar): ");
        scanf("%d", &numero[i]);

        if (numero[i] == 0) {
            break;
        }

        printf("Digite o kWh: ");
        scanf("%f", &kwh[i]);

        printf("1-Residencial\n2-Comercial\n3-Industrial\n");
        scanf("%d", &op);

        tipo[i] = op;

        if (op == 1) {
            custo[i] = kwh[i] * 0.3;
            total_residencial += kwh[i];
            qtd_residencial++;
        } 
        else if (op == 2) {
            custo[i] = kwh[i] * 0.5;
            total_comercial += kwh[i];
            qtd_comercial++;
        } 
        else if (op == 3) {
            custo[i] = kwh[i] * 0.7;
            total_industrial += kwh[i];
        } 
        else {
            printf("Tipo invalido!\n");
            continue;
        }

        i++;
    }

    media_residencial = total_residencial / qtd_residencial;

    media_comercial = total_comercial / qtd_comercial;

    printf("\nRESULTADO FINAL\n");

    for (int j = 0; j < i; j++) {
        printf("Consumidor %d - Tipo %d - Custo: R$ %.2f\n",
               numero[j], tipo[j], custo[j]);
    }

    printf("\nTotal residencial: %f kWh\n", total_residencial);
    printf("Total comercial: %f kWh\n", total_comercial);
    printf("Total industrial: %f kWh\n", total_industrial);

    printf("Media de consumo do tipo 1 (residencial): %f kWh\n", media_residencial);
    printf("Media de consumo do tipo 2 (comercial): %f kWh\n", media_comercial);

    return 0;
}