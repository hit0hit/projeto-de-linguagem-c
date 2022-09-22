#include <stdio.h>

int main (){
float Valor;


FILE *file;
system("cls");
file = fopen("recibo.txt", "w");
//fprintf(file,"nico1");

    fprintf(file,"  BRADESCO| 000-0 | 00000.00000.000000.00000000 00000.\n\n"


    "|LOCAL DE PAGAMENTO:\tQualque banco Bradesco\n" 

    "|DATA DO DOCUMENTO: 11/11/2021 | NUMERO DO DOCUMENTO: NF:554     | VENCIMENTO: 11/11/2021\n"
    "|ESPECIE: R$(Reais)\t       | QUANTIDADE DE PRODUTO(S):         VALOR %.2f\n", Valor);
    fprintf(file,"CARTEIRA/NOSSO NUMERO: 06/00000000000-0                          |AGENCIA / CODIGO CENDENTE: 1234-5/6789012-3\n"
    );

fclose (file);
system("start recibo.txt");
return 0;
    
}