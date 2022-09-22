#include <stdio.h>
int main()
{

    int qd, lt;
    char local[100];
system("color 75");
    printf("Informe a sua localizacao de entrega:\n");
    printf("informe sua Rua\n");
    scanf(" %s", &local);
    printf("Informe sua QD\n");
    scanf("%d", &qd);
    printf("Informe seu LT\n");
    scanf("%d", &lt);

printf("|>sua rua => %s\n|>Sua QD => %d\n|>seu LT => %d\n" , local,qd,lt);

}