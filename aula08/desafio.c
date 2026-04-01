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
    int numeroconsumidor = -1, op, i = 0, j = 0;
    float kwh, custo_consumidor;
    float total_residencial = 0, total_comercial = 0, total_industiral = 0;
    float media_residencial = 0, media_comercial = 0;

    while (numeroconsumidor != 0) {
        printf("Digite o numero do consumidor (0 para finalizar): ");
        scanf("%d", &numeroconsumidor);

        printf("Digite a quantidade de kWh consumidos no mes: ");
        scanf("%f", &kwh);

        printf("Escolha uma opcao:\n1-Residencial\n2-Comercial\n3-Industrial\n");
        scanf("%d", &op);

        if (op == 1) {
            custo_consumidor = kwh * 0.3;
            printf("O custo desse consumidor foi: %.2f\n", custo_consumidor);
            total_residencial += kwh;
            i++;
        } else if (op == 2) {
            custo_consumidor = kwh * 0.5;
            printf("O custo desse consumidor foi: %.2f\n", custo_consumidor);
            total_comercial += kwh;
            j++;
        } else if (op == 3) {
            custo_consumidor = kwh * 0.7;
            printf("O custo desse consumidor foi: %.2f\n", custo_consumidor);
            total_industiral += kwh;
        } else {
            printf("Tipo invalido.\n");
        }
    }

    printf("\nTotal de consumo residencial: %f kWh\n", total_residencial);
    printf("Total de consumo comercial: %f kWh\n", total_comercial);
    printf("Total de consumo industrial: %f kWh\n", total_industiral);

    printf("Media de consumo residencial: %f kWh\n", media_residencial);
    printf("Media de consumo comercial: %f kWh\n", media_comercial);

    return 0;
}
