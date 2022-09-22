#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a, n, n1 = 5, n2 = 10, n3 = 1;
    float valor = 100, valor_compra;

    srand(time(NULL));
    printf("\n\n");
    printf("Insira um numero para o sorteio do 1 a 10:\n");
    printf("Tem apenas uma chance, boa sorte!\n");
    scanf("%d", &n);
    do  
    {

        a = rand() % 10;

    } while (a == n1 || a == n2 || a == n3);

    if (n == a)
    {
        printf("Acertou Miseravel hehe:\n");
        printf("Parabens voce ganhou um cupom de desconto no valor de:R$%2.f\n", valor);
        valor -= valor_compra;
    }
    else
    {
        printf("Errou, voce e azarado demais:\n");
    }

    printf("Numero Sorteado:%d", a);
}
