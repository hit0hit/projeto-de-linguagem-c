#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <stdlib.h>
int main()
{

    bool programa = true;
    float valor_compra = 0;
    int cpf, cpf1, op, opc, cartao1;
    int cvv, data_de_vencimento, op , op1;
    float valor_compr, total, total2, total3, total4, total5, total6;
    setlocale(LC_ALL, "portuguese");
     textcolor(4);
    do
    {
        system("cls");
        printf("%.*s\n", 50, "*************************");
        printf("*|>seleciona as opção *\n*|>1-para entrar        *\n*|>2-para registrar     *\n*|>0-para sair          *");
        printf("%.*s\n", 50, "\n*************************\n|>op==>");
        scanf("%d", &op);

        if (op == 1)
        {
            system("cls");
            printf("digite o cpf");
            scanf(" %d", &cpf);

            if (cpf == cpf1)
            {
                system("cls");
                printf("%.*s\n", 50, "*************************************");
                printf("*Bem Vindo ao SuperMarketing Online!*\n");
                printf("%.*s\n", 50, "*************************************");
                system("pause");
                system("cls");
                while (programa)
                {
                    system("cls");
                    printf("%.*s\n", 50, "**************************************");
                    printf("|Bem Vindo ao SuperMarketing Online!|");
                    printf("\n|M E N U                            |\n");
                    printf("|VALOR COMPRA\tR$ %.2f             |\n", valor_compra);
                    printf("|> 1 - Cafe da Manha e Lanche.      |\n");
                    printf("|> 2 - Produtos Enlatados:          |\n");
                    printf("|> 3 - Carnes e derivados:          |\n");
                    printf("|> 4 - Produtos de Hortifruti:      |\n");
                    printf("|> 5 - Produtos de Mercearia:       |\n");
                    printf("|> 6 - Produtos de Limpeza:         |\n");
                    printf("|> 7 - Produtos de Higiene Pessoal: |\n");
                    printf("|> 8 - finalizar compra:            |\n");
                    printf("%.*s\n", 50, "**************************************");
                    printf("|> 0 - Fechar programa.\n");
                    scanf(" %d", &opc);
                    switch (opc)
                    {
                    case 1:
                        do
                        {
                            system("cls");
                            printf("| Cafe da manha e lanche:\n");
                            printf("|CODIGO\tITEM\t       PRECO R$ %.2f\n", valor_compra);
                            printf("|> 1\tCafe-----------R$ 8,00\n");
                            printf("|> 2\tCereais--------R$ 11,50\n");
                            printf("|> 3\tAchocolatado---R$ 6,00\n");
                            printf("|> 4\tAcucar---------R$ 9,00\n");
                            printf("|> 5\tPao de Forma---R$ 6,00\n");
                            printf("|> 6\tSuco-----------R$ 7,50\n");
                            printf("|> 7\tAdocante-------R$ 5,00\n");
                            printf("|> 8\tTorradas-------R$ 8,00\n");
                            printf("|> 9\tGeleia\t-------R$ 10,00\n");
                            printf("|> 10\tRoscas--------R$ 6,00\n");
                            printf("|> 0 voltar.");
                            scanf(" %d", &opc);
                            switch (opc)
                            {
                            case 1:
                                valor_compra += 8.00;
                                break;
                            case 2:
                                valor_compra += 11.50;
                                break;
                            case 3:
                                valor_compra += 6.00;
                                break;
                            case 4:
                                valor_compra += 9.00;
                                break;
                            case 5:
                                valor_compra += 6.00;
                                break;
                            case 6:
                                valor_compra += 7.50;
                                break;
                            case 7:
                                valor_compra += 5.00;
                                break;
                            case 8:
                                valor_compra += 8.00;
                                break;
                            case 9:
                                valor_compra += 10.00;
                                break;
                            case 10:
                                valor_compra += 6.00;
                                break;
                            }
                        } while (opc != 0);
                        break;

                    case 2:
                        do
                        {
                            system("cls");
                            printf("| Produtos Enlatados:\n");
                            printf("|CODIGO\tITEM\t       PRECO R$ %.2f\n", valor_compra);
                            printf("|> 1\tAtum-----------------R$ 5,00\n");
                            printf("|> 2\tCreme de Leite-------R$ 6,00\n");
                            printf("|> 3\tLeite Desconsado-----R$ 4,00\n");
                            printf("|> 4\tMolho de Tomate------R$ 7,00\n");
                            printf("|> 5\tAzeitonas------------R$ 8,00\n");
                            printf("|> 6\tMilho----------------R$ 7,50\n");
                            printf("|> 7\tErvilha--------------R$ 8,00\n");
                            printf("|> 8\tSardinha-------------R$ 8,00\n");
                            printf("|> 9\tketchup--------------R$ 10,00\n");
                            printf("|> 0 voltar.");
                            scanf(" %d", &opc);
                            switch (opc)
                            {
                            case 1:
                                valor_compra += 5.00;
                                break;
                            case 2:
                                valor_compra += 6.00;
                                break;
                            case 3:
                                valor_compra += 4.00;
                                break;
                            case 4:
                                valor_compra += 7.00;
                                break;
                            case 5:
                                valor_compra += 8.00;
                                break;
                            case 6:
                                valor_compra += 7.50;
                                break;
                            case 7:
                                valor_compra += 8.00;
                                break;
                            case 8:
                                valor_compra += 8.00;
                                break;
                            case 9:
                                valor_compra += 10.00;
                                break;
                            }
                        } while (opc != 0);
                        break;

                    case 3:
                        do
                        {
                            system("cls");
                            printf("| Carnes e derivados:\n");
                            printf("|CODIGO\tITEM\t       PRECO R$ %.2f\n", valor_compra);
                            printf("|> 1\tAcém---------------R$ 20.00\n");
                            printf("|> 2\tFrango-------------R$ 18,00\n");
                            printf("|> 3\tFile de frango-----R$ 15,00\n");
                            printf("|> 4\tFile---------------R$ 18,00\n");
                            printf("|> 5\tPicanha------------R$ 24,00\n");
                            printf("|> 6\tCoxinha------------R$ 20,00\n");
                            printf("|> 7\tCupim--------------R$ 25,00\n");
                            printf("|> 8\tLinguiça-----------R$ 15,00\n");
                            printf("|> 9\tLinguiça Toscana---R$ 20,00\n");
                            printf("|> 0 voltar.");
                            scanf(" %d", &opc);
                            switch (opc)
                            {
                            case 1:
                                valor_compra += 20.00;
                                break;
                            case 2:
                                valor_compra += 18.50;
                                break;
                            case 3:
                                valor_compra += 15.00;
                                break;
                            case 4:
                                valor_compra += 18.00;
                                break;
                            case 5:
                                valor_compra += 24.00;
                                break;
                            case 6:
                                valor_compra += 20.00;
                                break;
                            case 7:
                                valor_compra += 25.00;
                                break;
                            case 8:
                                valor_compra += 15.00;
                                break;
                            case 9:
                                valor_compra += 20.00;
                                break;
                            }
                        } while (opc != 0);
                        break;

                    case 4:
                        do
                        {
                            system("cls");
                            printf("| Produtos de Hortifruti:\n");
                            printf("|CODIGO\tITEM\t       PRECO R$ %.2f\n", valor_compra);
                            printf("|> 1\tAgriao-----------R$ 10,00\n");
                            printf("|> 2\tCebola-----------R$ 5,00\n");
                            printf("|> 3\tBatata-----------R$ 6,00\n");
                            printf("|> 4\tAlho-------------R$ 7,00\n");
                            printf("|> 5\tAlface-----------R$ 10,00\n");
                            printf("|> 6\tBrocolis---------R$ 8,00\n");
                            printf("|> 7\tPimentao---------R$ 7,00\n");
                            printf("|> 8\tTomate-----------R$ 5,00\n");
                            printf("|> 9\tCenoura----------R$ 5,00\n");
                            printf("|> 10\tCouve-----------R$ 9,00\n");
                            printf("|> 0 voltar.");
                            scanf(" %d", &opc);
                            switch (opc)
                            {
                            case 1:
                                valor_compra += 10.00;
                                break;
                            case 2:
                                valor_compra += 5.00;
                                break;
                            case 3:
                                valor_compra += 6.00;
                                break;
                            case 4:
                                valor_compra += 7.00;
                                break;
                            case 5:
                                valor_compra += 10.00;
                                break;
                            case 6:
                                valor_compra += 8.00;
                                break;
                            case 7:
                                valor_compra += 7.00;
                                break;
                            case 8:
                                valor_compra += 5.00;
                                break;
                            case 9:
                                valor_compra += 5.00;
                                break;
                            case 10:
                                valor_compra += 9.00;
                                break;
                            }
                        } while (opc != 0);
                        break;

                    case 5:
                        do
                        {
                            system("cls");
                            printf("| Produtos de Mercearia:\n");
                            printf("|CODIGO\tITEM\t       PRECO R$ %.2f\n", valor_compra);
                            printf("|> 1\tArroz--------------R$ 29,00\n");
                            printf("|> 2\tFeijao-------------R$ 9,00\n");
                            printf("|> 3\tOleo---------------R$ 15,00\n");
                            printf("|> 4\tFermento-----------R$ 5,00\n");
                            printf("|> 5\tAzeite-------------R$ 7,00\n");
                            printf("|> 6\t|Farinha de Trigo--R$ 9,00\n");
                            printf("|> 7\tOvos---------------R$ 10,00\n");
                            printf("|> 8\tFarinha------------R$ 8,00\n");
                            printf("|> 9\tVinagre------------R$ 16,00\n");
                            printf("|> 10\tMaisena-----------R$ 6,00\n");
                            printf("|> 0 voltar.");
                            scanf(" %d", &opc);
                            switch (opc)
                            {
                            case 1:
                                valor_compra += 29.00;
                                break;
                            case 2:
                                valor_compra += 9.00;
                                break;
                            case 3:
                                valor_compra += 15.00;
                                break;
                            case 4:
                                valor_compra += 5.00;
                                break;
                            case 5:
                                valor_compra += 7.00;
                                break;
                            case 6:
                                valor_compra += 9.00;
                                break;
                            case 7:
                                valor_compra += 10.00;
                                break;
                            case 8:
                                valor_compra += 8.00;
                                break;
                            case 9:
                                valor_compra += 16.00;
                                break;
                            case 10:
                                valor_compra += 6.00;
                                break;
                            }
                        } while (opc != 0);
                        break;

                    case 6:
                        do
                        {
                            system("cls");
                            printf("| Produtos de Limpeza:\n");
                            printf("|CODIGO\tITEM\t       PRECO R$ %.2f\n", valor_compra);
                            printf("|> 1\tAgua Samitaria-----------R$ 8,00\n");
                            printf("|> 2\tAlcool-------------------R$ 10,00\n");
                            printf("|> 3\tAmaciante----------------R$ 16,00\n");
                            printf("|> 4\tCera---------------------R$ 9,00\n");
                            printf("|> 5\tDesinfetante-------------R$ 18,00\n");
                            printf("|> 6\tLimpa Vidro--------------R$ 8,00\n");
                            printf("|> 7\tMultiuso-----------------R$ 11,00\n");
                            printf("|> 8\tSabao--------------------R$ 10,00\n");
                            printf("|> 9\tDetergente---------------R$ 12,00\n");
                            printf("|> 0 voltar.");
                            scanf(" %d", &opc);
                            switch (opc)
                            {
                            case 1:
                                valor_compra += 8.00;
                                break;
                            case 2:
                                valor_compra += 10.00;
                                break;
                            case 3:
                                valor_compra += 16.00;
                                break;
                            case 4:
                                valor_compra += 9.00;
                                break;
                            case 5:
                                valor_compra += 18.00;
                                break;
                            case 6:
                                valor_compra += 8.00;
                                break;
                            case 7:
                                valor_compra += 11.00;
                                break;
                            case 8:
                                valor_compra += 10.00;
                                break;
                            case 9:
                                valor_compra += 12.00;
                                break;
                            }
                        } while (opc != 0);
                        break;

                    case 7:
                        do
                        {
                            system("cls");
                            printf("| Produtos de Higiene Pessoal:\n");
                            printf("|CODIGO\tITEM\t       PRECO R$ %.2f\n", valor_compra);
                            printf("|> 1\tAbsorvente-----------R$ 5,00\n");
                            printf("|> 2\tAlgodao--------------R$ 5,00\n");
                            printf("|> 3\tAcetona--------------R$ 4,00\n");
                            printf("|> 4\tLamina de Barbear----R$ 4,00\n");
                            printf("|> 5\tCondicionador--------R$ 18,00\n");
                            printf("|> 6\tShampoo--------------R$ 21,00 \n");
                            printf("|> 7\tDesodorante----------R$ 8,00\n");
                            printf("|> 8\tSabonete-------------R$ 4,00\n");
                            printf("|> 9\tPapel higienico------R$ 12,00\n");
                            printf("|> 10\tCotonete------------R$ 5,00\n");
                            printf("|> 0 voltar.");
                            scanf(" %d", &opc);
                            switch (opc)
                            {
                            case 1:
                                valor_compra += 5.00;
                                break;
                            case 2:
                                valor_compra += 5.00;
                                break;
                            case 3:
                                valor_compra += 4.00;
                                break;
                            case 4:
                                valor_compra += 4.00;
                                break;
                            case 5:
                                valor_compra += 18.00;
                                break;
                            case 6:
                                valor_compra += 21.00;
                                break;
                            case 7:
                                valor_compra += 8.00;
                                break;
                            case 8:
                                valor_compra += 4.00;
                                break;
                            case 9:
                                valor_compra += 12.00;
                                break;
                            case 10:
                                valor_compra += 5.00;
                                break;
                            }
                        } while (opc != 0);
                        break;
                    case 8:

                        printf("forma de pagamento\n|> 1- cartão de crédito\n|> 2- cartão de débito\n|> 3- pagar no boleto\n|> 4- pagar no pix");
                        scanf("%d", &op1);

                        switch (op1)
                        {
                        case 1:
                            

                            system("cls");

                            printf("|>pagando em credito<|\n");
                            printf("|>informe o numero do cartao =>");
                            scanf("%d", &cartao1);
                            printf("|>informe o ccv =>");
                            scanf("%d", &cvv);
                            printf("|>informe a data de vencimento =>");
                            scanf("%d", &data_de_vencimento);

                            system("cls");

                            printf("|>numero do cartao => %d\n|>cvv => %d\n|>data de vencimento => %d\n\n\n\n", cartao1, cvv, data_de_vencimento);
                            system("pause");

                            system("cls");

                            total = valor_compr;
                            total2 = valor_compr / 2;
                            total3 = valor_compr / 3;
                            total4 = valor_compr / 4;
                            total5 = valor_compr / 5;
                            total6 = valor_compr / 6;

                            printf("|>Pagamento em 1 vez: %2.f\n", total);
                            printf("|>Pagamento em 2 vezes: %2.f\n", total2);
                            printf("|>Pagamento em 3 vezes: %2.f\n", total3);
                            printf("|>Pagamento em 4 veses: %2.f\n", total4);
                            printf("|>Pagamento em 5 vezes: %2.f\n", total5);
                            printf("|>Pagamento em 6 vezes: %2.f\n\n\n", total6);

                            printf("|>Em quantas vezes que dividir =>");
                            scanf("%d", &op1);
                            system("cls");
                            switch (op1)
                            {
                            case 1:
                                total = valor_compr;
                                printf("|>numero do cartao => %d\n|>cvv => %d\n|>data de vencimento => %d\n", cartao1, cvv, data_de_vencimento);
                                printf("|>sua compra vai ficar em 1x no cartao R$%2.f\n\n\n\n", total);
                                system("pause");
                                valor_compr = 0;
                                break;
                            case 2:
                                total2 = valor_compr / 2;
                                printf("|>numero do cartao => %d\n|>cvv => %d\n|>data de vencimento => %d\n", cartao1, cvv, data_de_vencimento);
                                printf("|>sua compra vai ficar em 2x no cartao R$%2.f\n\n\n\n", total2);
                                system("pause");
                                valor_compr = 0;
                                break;
                            case 3:
                                total3 = valor_compr / 3;
                                printf("|>numero do cartao => %d\n|>cvv => %d\n|>data de vencimento => %d\n", cartao1, cvv, data_de_vencimento);
                                printf("|>sua compra vai ficar em 3x no cartao R$%2.f\n\n\n\n", total3);
                                system("pause");
                                valor_compr = 0;
                                break;
                            case 4:
                                total4 = valor_compr / 4;
                                printf("|>numero do cartao => %d\n|>cvv => %d\n|>data de vencimento => %d\n", cartao1, cvv, data_de_vencimento);
                                printf("|>sua compra vai ficar em 4x no  cartao $%2.f\n\n\n\n", total4);
                                system("pause");
                                valor_compr = 0;
                                break;
                            case 5:
                                total5 = valor_compr / 5;
                                printf("|>numero do cartao => %d\n|>cvv => %d\n|>data de vencimento => %d\n", cartao1, cvv, data_de_vencimento);
                                printf("|>sua compra vai ficar em 5x no cartao R$%2.f\n\n\n\n", total5);
                                system("pause");
                                valor_compr = 0;
                                break;
                            case 6:
                                total6 = valor_compr / 6;
                                printf("|>numero do cartao => %d\n|>cvv => %d\n|>data de vencimento => %d\n", cartao1, cvv, data_de_vencimento);
                                printf("|>sua compra vai ficar em 6x no cartao R$%2.f\n\n\n\n", total6);
                                system("pause");
                                valor_compr = 0;
                                break;

                            default:
                                break;
                            }
                            system("cls");
                            printf("%.*s\n", 100, "***************************************************************************************");
                            printf("|> Sua compra foi realizada com sucesso :-)!!\n");
                            printf("|> Obrigado pela sua preferencia, a SuperMarketing agradece a sua colaboracao:\n");
                            printf("%.*s\n", 100, "***************************************************************************************");

                        default:
                            break;
                        }

                        break;

                    case 0:
                        programa = false;
                        break;
                    }
                }
            }
            else
            {
                printf("Usuario nao Cadastrado!!!\n");
                system("pause");
            }
        }
        if (op == 2)
        {
            system("cls");
            printf("digite o cpf para registrar");
            scanf(" %d", &cpf1);
            system("cls");
            printf("\nUsuario Cadastrado!!!\n");
            system("pause");
        }

    } while (op != 0);

    return 0;
}