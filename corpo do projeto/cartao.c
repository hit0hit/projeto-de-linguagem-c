#include <stdio.h>
#include<conio.h>
int main () {
 system("color 1");
int cartao1 , cvv , data_de_vencimento ,op;
float valor_compr , total , total2 , total3 , total4 , total5 , total6;

system("cls");

    printf("|>pagando em credito<|\n");
    printf("|>informe o numero do cartao =>");
    scanf("%d" , &cartao1);
    printf("|>informe o ccv =>");
    scanf("%d" , &cvv);
    printf("|>informe a data de vencimento =>");
    scanf("%d" , &data_de_vencimento);


system("cls");

printf("|>numero do cartao => %d\n|>cvv => %d\n|>data de vencimento => %d\n\n\n\n" , cartao1 , cvv , data_de_vencimento);
system("pause");

valor_compr = 1000;
system("cls");
total = valor_compr;
total2 = valor_compr/2;
total3 = valor_compr/3;
total4 = valor_compr/4;
total5 = valor_compr/5;
total6 = valor_compr/6;

printf("|>Pagamento em 1 vez: %2.f\n" , total);
printf("|>Pagamento em 2 vezes: %2.f\n" , total2);
printf("|>Pagamento em 3 vezes: %2.f\n" , total3);
printf("|>Pagamento em 4 veses: %2.f\n" , total4);
printf("|>Pagamento em 5 vezes: %2.f\n" , total5);
printf("|>Pagamento em 6 vezes: %2.f\n\n\n" , total6);


printf("|>Em quantas vezes que dividir =>");
scanf("%d" , &op);
system("cls");
switch (op)
{
case 1:
    total = valor_compr;
    printf("|>numero do cartao => %d\n|>cvv => %d\n|>data de vencimento => %d\n" , cartao1 , cvv , data_de_vencimento);
    printf("|>sua compra vai ficar em 1x no cartao R$%2.f\n\n\n\n" , total);
    system("pause");
    valor_compr=0;
    break;
case 2:
    total2 = valor_compr/2;
    printf("|>numero do cartao => %d\n|>cvv => %d\n|>data de vencimento => %d\n" , cartao1 , cvv , data_de_vencimento);
    printf("|>sua compra vai ficar em 2x no cartao R$%2.f\n\n\n\n" , total2);
    system("pause");
    valor_compr=0;
    break;
case 3:
    total3 = valor_compr/3;
    printf("|>numero do cartao => %d\n|>cvv => %d\n|>data de vencimento => %d\n" , cartao1 , cvv , data_de_vencimento);
    printf("|>sua compra vai ficar em 3x no cartao R$%2.f\n\n\n\n" , total3);
    system("pause");
    valor_compr=0;
    break;
case 4:
    total4 = valor_compr/4;
    printf("|>numero do cartao => %d\n|>cvv => %d\n|>data de vencimento => %d\n" , cartao1 , cvv , data_de_vencimento);
    printf("|>sua compra vai ficar em 4x no  cartao $%2.f\n\n\n\n" , total4);
    system("pause");
    valor_compr=0;
    break;
case 5:
    total5 = valor_compr/5;
    printf("|>numero do cartao => %d\n|>cvv => %d\n|>data de vencimento => %d\n" , cartao1 , cvv , data_de_vencimento);
    printf("|>sua compra vai ficar em 5x no cartao R$%2.f\n\n\n\n" , total5);
    system("pause");
    valor_compr=0;
    break;
case 6:
    total6 = valor_compr/6;
    printf("|>numero do cartao => %d\n|>cvv => %d\n|>data de vencimento => %d\n" , cartao1 , cvv , data_de_vencimento);
    printf("|>sua compra vai ficar em 6x no cartao R$%2.f\n\n\n\n" , total6);
    system("pause");
    valor_compr=0;
    break;

default:
    break;
}
system("cls");
printf("%.*s\n", 100, "***************************************************************************************");
printf("|> Sua compra foi realizada com sucesso :-)!!\n");
printf("|> Obrigado pela sua preferencia, a SuperMarketing agradece a sua colaboracao:\n");
printf("%.*s\n", 100, "***************************************************************************************");


}