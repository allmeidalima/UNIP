#include <stdio.h>

/* TO DO

----------------------------------------------------------------
Fazer um programa de pagamento de bônus ao vendedor
----------------------------------------------------------------
Entrada: Nome do vendedor, salário do vendedor e total de vendas em real;
Comição: 15%;
Saída: Informar o total da comição do vendedor no final do mês;
*/

int main(){
    
    char vendedor[10];
    double salario, vendas, total;

    printf("Nome do vendedor: \n");
    scanf("%s", &vendedor);

    printf("Salario do %s: \n", &vendedor);
    scanf("%lf", &salario);

    printf("Valor das vendas: \n");
    scanf("%lf", &vendas);

    total = (vendas * 0.15) + salario;

    printf("O total a pagar para %s: %.2lf\n", &vendedor, total);


    return 0;
}