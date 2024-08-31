#include <stdio.h>

int main() {
    char nomeProduto[50];
    int quantidade;
    float precoUnitario, valorTotal, valorTotalDia = 0;
    char opcao;

    do {
        // Receber dados do usuário
        printf("Digite o nome do produto: ");
        scanf("%s", nomeProduto);
        printf("Digite a quantidade vendida: ");
        scanf("%d", &quantidade);
        printf("Digite o preco unitario: ");
        scanf("%f", &precoUnitario);

        // Calcular valor total da venda
        valorTotal = quantidade * precoUnitario;
        printf("Valor total da venda: %.2f\n", valorTotal);

        // Adicionar o valor da venda ao total do dia
        valorTotalDia += valorTotal;

        // Perguntar se o usuário deseja registrar outra venda
        printf("Deseja registrar outra venda? (s/n): ");
        scanf(" %c", &opcao);

    } while(opcao == 's' || opcao == 'S');

    // Exibir o total arrecadado no dia
    printf("Valor total arrecadado no dia: %.2f\n", valorTotalDia);

    return 0;
}
