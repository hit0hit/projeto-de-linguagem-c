#include <stdio.h>
int main()
{

    int cpf, cpf1, op;
do {
    system("cls");
   // printf("%*s", count, "");
    printf("%*s\n", 5, "*");
    printf("|>seleciona as opção\n|>1-mara entrar\n|>2-para registrar\n|>-1=para sair\n|>op==>");
    scanf(" %d" ,&op);

if (op == 1)
{
    system("cls");
    printf("cpf");
    scanf(" %d" ,&cpf);

    if (cpf == cpf1)
    {
        system("cls");
        printf("Bem Vindo ao SuperMarketing Online!\n\n\n\n");
        system("pause");
    }
    else
    {
        printf("Usuario nao Cadastrado");
        system("pause");
    }
}
if (op ==2)
{
    system("cls");
     printf("cpf1");
    scanf(" %d", &cpf1);
     system("cls");
    printf("\nUsuario Cadastrado!!!\n");
    system("pause");
}

}while(op != -1);
    return 0;
}