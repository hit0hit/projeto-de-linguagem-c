#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <stdlib.h>
int main()
{

    bool programa = true;
    float valor_compra = 0;
    int opc;
   int cont=0,cont1=0,cont2=0,cont3=0,cont4=0,cont5=0,cont6=0,cont7=0,cont8=0,cont9=0,cont10=0;

    setlocale(LC_ALL, "portuguese");

    do
    {

        system("cls");
        printf("|CODIGO\tITEM\t                  PRECO\t\t\ Valor total => R$ %.2f|>cont%d|>cont%d|>cont%d|>cont%d|>cont%d\n", valor_compra, cont,cont1,cont2,cont3,cont4);
        printf("|> 1\tCachorro quente-----------R$ 1,50\n");
        printf("|> 2\tHamburguer----------------R$ 2,00\n");
        printf("|> 3\tCheeseburguer-------------R$ 2,50\n");
        printf("|> 4\tEggCheeseburguer----------R$ 3,00\n");
        printf("|> 5\tRefrigerante--------------R$ 1,50\n");
        printf("|> 6 Finalizar compra =>\n");
        scanf(" %d", &opc);
        switch (opc)
        {
        case 1:
            valor_compra += 1.50;
            cont++;
            if (cont == 3){
                valor_compra -= 1.50;
            }
            break;
        case 2:
            valor_compra += 2.00;
            cont1++;
        
            break;
        case 3:
            valor_compra += 2.50;
            cont2++;
            break;
        case 4:
            valor_compra += 3.00;
            cont3++;
            break;
        case 5:
            valor_compra += 1.50;
            cont4++;
            break;
        
        }
    }while(opc != 6);
    printf("Sua compra ficou no total de:\tR$%.2f\n", valor_compra);

    return 0;
}