#include <stdio.h>
#include <stdbool.h>
//#include <locale.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

int main()
{

    time_t agora;
    char datahora[100];
    // setlocale(LC_ALL, "portuguese");
    bool programa = true;
    float valor_compra = 0;                              // para somar os pedidos
    int cpf, cpf1, op, opc, cartao2;                     // para o cpf
    int cartao1, cvv, data_de_vencimento;                // para os cartão
    int i, j;                                            // para tela de carregamento
    float total, total2, total3, total4, total5, total6; // soma do total a pagar no cartão
    int qd, lt;                                          // para localização
    int cont = 0, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0, cont6 = 0, cont7 = 0, cont8 = 0, cont9 = 0;
    int a, n, n1 = 5, n2 = 10, n3 = 1;
    float valor = 100;

    char local[100]; // para a localização



    // system("start senpai.mp3"); //iniciar musica
    // musica ...........
    // referencia da musica ..............

   
   

    /* data */
    agora = time(NULL);

    /* horas */
    strftime(datahora, sizeof(datahora), "%d.%m.%Y - %H:%M:%S", localtime(&agora));
    // fim hora
    // carregamento começo
    system("color 4");
    system("cls"); // apagar

    printf("\n\nCarregando: \n\n");

    for (i = 0; i <= 100; i++)
    {
        // printf ("\r  %d%%", i);
        printf("  %d%%\r", i);
        fflush(stdout);

        for (j = 0; j < i; j++)
        {
            if (!j) // Da espaco na barra pra nao encostra na borda da tela
                printf("  ");

            printf("%c", 219);
            Sleep(0);
        }
    }

    printf("\n\nFinalizando...");
    Sleep(2000);
    printf("\r \t\t\t\t  CARREGADO\n\n\n");
    printf("%.*s\n", 50, "\t\t*************************************");
    printf("\t\t*Bem Vindo ao SuperMarketing Online!*\n");
    printf("%.*s\n", 50, "\t\t*************************************\n\n");

    printf("\t\t  Disciplina: Introducao a Programacao\n\n");
    printf("\t\t  Alunos: Henrique Siva Cruz\n\t\t          Joao Victor Duarte Lima\n\t\t          Antonio junior gomes de jesus\n\n");

    printf("\t\t  Professor: Paulo Cesar Melo\n\n\n");
    system("pause");
    // Autor da tela de carregamento: Tarik Ahmad (Thiago Alexandre)
    // carregamento fim
    do
    {
        system("cls");
        system("color 9");
        printf("%.*s\n", 50, "*************************");
        printf("*|>seleciona as opcao   *\n*|>1-para entrar        *\n*|>2-para registrar     *\n*|>3-Atendimento on-line*\n*|>0-para sair          *");
        printf("%.*s\n", 50, "\n*************************\n|>op==>");
        scanf("%d", &op);

        if (op == 1)
        {
            // carregamento começo
            system("color 2");
            for (int i = 0; i < 10; i++)
            {
                printf("Carregando %d", i);
                for (int j = 0; j < 30; j++)
                {
                    printf(".");
                    Sleep(1);
                }
                printf("\r");
                for (int j = 0; j < 60; j++)
                {
                    printf(" "); // apaga a linha anterior
                }
                printf("\r");
                // carregamento fim
            }
            
            system("cls");
            system("color 9");
            printf("digite o cpf =>");
            scanf(" %d", &cpf);

            if (cpf == cpf1)
            {

                system("color 2");
                // carregamento começo
                system("cls");

                printf("\n\nCarregando: \n\n");

                for (i = 0; i <= 100; i++)
                {
                    // printf ("\r  %d%%", i);
                    printf("  %d%%\r", i);
                    fflush(stdout);

                    for (j = 0; j < i; j++)
                    {
                        if (!j) // Da espaco na barra pra nao encostar na borda da tela
                            printf("  ");

                        printf("%c", 219);
                        Sleep(0.99);
                    }
                }

                printf("\n\nFinalizando...");
                Sleep(2000);
                printf("\r \t\t\t\t  CARREGADO\n\n\n");
                printf("\t\t SuperMarketing Online\n\n\n\n");
                system("pause");
                // carregamento fim
                system("color d");
                system("cls");
                printf("%.*s\n", 50, "*************************************");
                printf("*Bem Vindo ao SuperMarketing Online!*\n");
                printf("%.*s\n", 50, "*************************************");
                system("pause");
                system("cls");

                while (programa)
                {
                    system("color 9");
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
                    printf("|> 8 - Leve 3 page 2:               |\n");
                    printf("|> 9 - Ver promocao:                |\n");
                    printf("|> 11 - finalizar compra:           |\n");
                    printf("%.*s\n", 50, "**************************************");
                    printf("|> 0 - Fechar programa.\n");
                    scanf(" %d", &opc); // opção do menu numero1
                    switch (opc)        // opção numero1
                    {
                    case 1:
                        // carregamento começo
                        system("color 2");
                        for (int i = 0; i < 10; i++)
                        {
                            printf("Carregando %d", i);
                            for (int j = 0; j < 30; j++)
                            {
                                printf(".");
                                Sleep(1);
                            }
                            printf("\r");
                            for (int j = 0; j < 60; j++)
                            {
                                printf(" "); // apaga a linha anterior
                            }
                            printf("\r");
                            // carregamento fim
                        }
                        
                        do
                        {

                            system("cls");
                            system("color 9");
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
                        // carregamento começo
                        system("color 2");
                        for (int i = 0; i < 10; i++)
                        {
                            printf("Carregando %d", i);
                            for (int j = 0; j < 30; j++)
                            {
                                printf(".");
                                Sleep(1);
                            }
                            printf("\r");
                            for (int j = 0; j < 60; j++)
                            {
                                printf(" "); // apaga a linha anterior
                            }
                            printf("\r");
                            // carregamento fim
                        }
                        
                        do
                        {
                            system("cls");
                            system("color 9");
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
                        // carregamento começo
                        system("color 2");
                        for (int i = 0; i < 10; i++)
                        {
                            printf("Carregando %d", i);
                            for (int j = 0; j < 30; j++)
                            {
                                printf(".");
                                Sleep(1);
                            }
                            printf("\r");
                            for (int j = 0; j < 60; j++)
                            {
                                printf(" "); // apaga a linha anterior
                            }
                            printf("\r");
                            // carregamento fim
                        }
                       
                        do
                        {
                            system("cls");
                            system("color 9");
                            printf("| Carnes e derivados:\n");
                            printf("|CODIGO\tITEM\t       PRECO R$ %.2f\n", valor_compra);
                            printf("|> 1\tAcem---------------R$ 20.00\n");
                            printf("|> 2\tFrango-------------R$ 18,00\n");
                            printf("|> 3\tFile de frango-----R$ 15,00\n");
                            printf("|> 4\tFile---------------R$ 18,00\n");
                            printf("|> 5\tPicanha------------R$ 24,00\n");
                            printf("|> 6\tCoxinha------------R$ 20,00\n");
                            printf("|> 7\tCupim--------------R$ 25,00\n");
                            printf("|> 8\tLinguica-----------R$ 15,00\n");
                            printf("|> 9\tLinguica Toscana---R$ 20,00\n");
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
                        // carregamento começo
                        system("color 2");
                        for (int i = 0; i < 10; i++)
                        {
                            printf("Carregando %d", i);
                            for (int j = 0; j < 30; j++)
                            {
                                printf(".");
                                Sleep(1);
                            }
                            printf("\r");
                            for (int j = 0; j < 60; j++)
                            {
                                printf(" "); // apaga a linha anterior
                            }
                            printf("\r");
                            // carregamento fim
                        }
                        
                        do
                        {
                            system("cls");
                            system("color 9");
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
                        // carregamento começo
                        system("color 2");
                        for (int i = 0; i < 10; i++)
                        {
                            printf("Carregando %d", i);
                            for (int j = 0; j < 30; j++)
                            {
                                printf(".");
                                Sleep(1);
                            }
                            printf("\r");
                            for (int j = 0; j < 60; j++)
                            {
                                printf(" "); // apaga a linha anterior
                            }
                            printf("\r");
                            // carregamento fim
                        }
                        
                        do
                        {
                            system("cls");
                            system("color 9");
                            printf("| Produtos de Mercearia:\n");
                            printf("|CODIGO\tITEM\t       PRECO R$ %.2f\n", valor_compra);
                            printf("|> 1\tArroz--------------R$ 29,00\n");
                            printf("|> 2\tFeijao-------------R$ 9,00\n");
                            printf("|> 3\tOleo---------------R$ 15,00\n");
                            printf("|> 4\tFermento-----------R$ 5,00\n");
                            printf("|> 5\tAzeite-------------R$ 7,00\n");
                            printf("|> 6\tFarinha de Trigo--R$ 9,00\n");
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
                        // carregamento começo
                        system("color 2");
                        for (int i = 0; i < 10; i++)
                        {
                            printf("Carregando %d", i);
                            for (int j = 0; j < 30; j++)
                            {
                                printf(".");
                                Sleep(1);
                            }
                            printf("\r");
                            for (int j = 0; j < 60; j++)
                            {
                                printf(" "); // apaga a linha anterior
                            }
                            printf("\r");
                            // carregamento fim
                        }
                        
                        do
                        {
                            system("cls");
                            system("color 9");
                            printf("| Produtos de Limpeza:\n");
                            printf("|CODIGO\tITEM\t       PRECO R$ %.2f\n", valor_compra);
                            printf("|> 1\tAgua Sanitaria-----------R$ 8,00\n");
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
                        // carregamento começo
                        system("color 2");
                        for (int i = 0; i < 10; i++)
                        {
                            printf("Carregando %d", i);
                            for (int j = 0; j < 30; j++)
                            {
                                printf(".");
                                Sleep(1);
                            }
                            printf("\r");
                            for (int j = 0; j < 60; j++)
                            {
                                printf(" "); // apaga a linha anterior
                            }
                            printf("\r");
                            // carregamento fim
                        }
                        // printf("\nhti\n");
                        do
                        {
                            system("cls");
                            system("color 9");
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
                        // carregamento começo
                        system("color 2");
                        for (int i = 0; i < 10; i++)
                        {
                            printf("Carregando %d", i);
                            for (int j = 0; j < 30; j++)
                            {
                                printf(".");
                                Sleep(1);
                            }
                            printf("\r");
                            for (int j = 0; j < 60; j++)
                            {
                                printf(" "); // apaga a linha anterior
                            }
                            printf("\r");
                            // carregamento fim
                        }
                        
                        do
                        {
                            system("cls");
                            system("color 9");
                            printf("| Leve 3 pague 2:\n");
                            printf("|CODIGO\tITEM\t       PRECO R$ %.2f\n", valor_compra);
                            printf("    Leve 3 pague 2\n");
                            printf("|> 1\tBarra de chocolate Garoto----------R$ 6,00\n");
                            printf("|> 2\tBarra de chocolate Lactea----------R$ 7,00\n");
                            printf("|> 3\tBarra de chocolate Nestle----------R$ 8,00\n");
                            printf("|> 4\tTubes Fine-------------------------R$ 4,00\n");
                            printf("|> 5\tDentaduras Fine--------------------R$ 4,00\n");
                            printf("|> 6\tBananas Fine-----------------------R$ 5,50\n");
                            printf("|> 7\tOvos Fritos Fine-------------------R$ 4,80 \n");
                            printf("|> 8\tAmoras Fine------------------------R$ 6,00\n");
                            printf("|> 9\tCoracao Fine-----------------------R$ 4,00\n");
                            printf("|> 10\tTijolinhos Fine-------------------R$ 3,50\n");
                            printf("|> 0 voltar.");
                            scanf(" %d", &opc);
                            switch (opc)
                            {
                            case 1:
                                valor_compra += 6.00;
                                cont++;
                                if (cont == 3)
                                {
                                    valor_compra -= 6.00;
                                }
                                break;
                            case 2:
                                valor_compra += 7.00;
                                cont1++;
                                if (cont1 == 3)
                                {

                                    valor_compra -= 7.00;
                                }
                                break;
                            case 3:
                                valor_compra += 8.00;
                                cont2++;
                                if (cont2 == 3)
                                {
                                    valor_compra -= 8.00;
                                }
                                break;
                            case 4:
                                valor_compra += 4.00;
                                cont3++;
                                if (cont3 == 3)
                                {
                                    valor_compra -= 4.00;
                                }
                                break;
                            case 5:
                                valor_compra += 4.00;
                                cont4++;
                                if (cont4 == 3)
                                {
                                    valor_compra -= 4.00;
                                }
                                break;
                            case 6:
                                valor_compra += 5.50;
                                cont5++;
                                if (cont5 == 3)
                                {
                                    valor_compra -= 5.50;
                                }
                                break;
                            case 7:
                                valor_compra += 4.80;
                                cont6++;
                                if (cont6 == 3)
                                {
                                    valor_compra -= 4.80;
                                }
                                break;
                            case 8:
                                valor_compra += 6.00;
                                cont7++;
                                if (cont7 == 3)
                                {

                                    valor_compra -= 6.60;
                                }
                                break;
                            case 9:
                                valor_compra += 4.00;
                                cont8++;
                                if (cont8 == 3)
                                {
                                    valor_compra -= 4.00;
                                }
                                break;
                            case 10:
                                valor_compra += 3.50;
                                cont9++;
                                if (cont9 == 3)
                                {
                                    valor_compra -= 3.50;
                                }
                                break;
                            }
                        } while (opc != 0);
                        break;

                    case 9:

                        system("start promocao.jpg");
                        // referencia do anúncio https://ofertasnosupermercado.com/ofertas-supermarket/
                        break;

                    case 11:
                        // carregamento começo
                        system("color 2");
                        for (int i = 0; i < 10; i++)
                        {
                            printf("Carregando %d", i);
                            for (int j = 0; j < 30; j++)
                            {
                                printf(".");
                                Sleep(1);
                            }
                            printf("\r");
                            for (int j = 0; j < 60; j++)
                            {
                                printf(" "); // apaga a linha anterior
                            }
                            printf("\r");
                            // carregamento fim
                        }
                        // printf("\nhti\n");
                        system("cls");
                        system("color 9");
                        printf("forma de pagamento\n|> 1- cartao de credito\n|> 2- cartao de debito\n|> 3- pagar no boleto\n|> 4- pagar no pix\n|> 5- pagar no QR code\n");
                        scanf("%d", &op);

                        switch (op)
                        {
                        case 1:
                            // carregamento começo
                            system("color 2");
                            for (int i = 0; i < 10; i++)
                            {
                                printf("Carregando %d", i);
                                for (int j = 0; j < 30; j++)
                                {
                                    printf(".");
                                    Sleep(1);
                                }
                                printf("\r");
                                for (int j = 0; j < 60; j++)
                                {
                                    printf(" "); // apaga a linha anterior
                                }
                                printf("\r");
                                // carregamento fim
                            }
                            // printf("\nhti\n");
                            system("cls");
                            
                            // começo do sorteio
                            printf("\n\n");
                            srand(time(NULL));
                            system("color 9");
                            printf("\n\n");
                            printf("Insira um numero para o sorteio de 1 a 10:\n");
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

                            printf("Numero Sorteado:%d\n", a);
                            system("pause");
                            // fim do sorteio

                            system("cls");
                            system("color 9");
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

                            total = valor_compra;
                            total2 = valor_compra / 2;
                            total3 = valor_compra / 3;
                            total4 = valor_compra / 4;
                            total5 = valor_compra / 5;
                            total6 = valor_compra / 6;

                            printf("|>Pagamento em 1 vez: %2.f\n", total);
                            printf("|>Pagamento em 2 vezes: %2.f\n", total2);
                            printf("|>Pagamento em 3 vezes: %2.f\n", total3);
                            printf("|>Pagamento em 4 vezes: %2.f\n", total4);
                            printf("|>Pagamento em 5 vezes: %2.f\n", total5);
                            printf("|>Pagamento em 6 vezes: %2.f\n\n\n", total6);

                            printf("|>Em quantas vezes que dividir =>");
                            scanf("%d", &op);
                            system("cls");
                            switch (op)
                            {
                            case 1:
                                total = valor_compra;
                                printf("|>numero do cartao => %d\n|>cvv => %d\n|>data de vencimento => %d\n", cartao1, cvv, data_de_vencimento);
                                printf("|>sua rua=> %s QD=> %d LT=> %d\n", local, qd, lt);
                                printf("|>sua compra vai ficar em 1x no cartao R$%2.f\n\n\n\n", total);
                                system("pause");
                                valor_compra = 0;
                                break;
                            case 2:
                                total2 = valor_compra / 2;
                                printf("|>numero do cartao => %d\n|>cvv => %d\n|>data de vencimento => %d\n", cartao1, cvv, data_de_vencimento);
                                printf("|>sua rua=> %s QD=> %d LT=> %d\n", local, qd, lt);
                                printf("|>sua compra vai ficar em 2x no cartao R$%2.f\n\n\n\n", total2);
                                system("pause");
                                valor_compra = 0;
                                break;
                            case 3:
                                total3 = valor_compra / 3;
                                printf("|>numero do cartao => %d\n|>cvv => %d\n|>data de vencimento => %d\n", cartao1, cvv, data_de_vencimento);
                                printf("|>sua rua=> %s QD=> %d LT=> %d\n", local, qd, lt);
                                printf("|>sua compra vai ficar em 3x no cartao R$%2.f\n\n\n\n", total3);
                                system("pause");
                                valor_compra = 0;
                                break;
                            case 4:
                                total4 = valor_compra / 4;
                                printf("|>numero do cartao => %d\n|>cvv => %d\n|>data de vencimento => %d\n", cartao1, cvv, data_de_vencimento);
                                printf("|>sua rua=> %s QD=> %d LT => %d\n", local, qd, lt);
                                printf("|>sua compra vai ficar em 4x no  cartao $%2.f\n\n\n\n", total4);
                                system("pause");
                                valor_compra = 0;
                                break;
                            case 5:
                                total5 = valor_compra / 5;
                                printf("|>numero do cartao => %d\n|>cvv => %d\n|>data de vencimento => %d\n", cartao1, cvv, data_de_vencimento);
                                printf("|>sua rua=> %s QD=> %d LT=> %d\n", local, qd, lt);
                                printf("|>sua compra vai ficar em 5x no cartao R$%2.f\n\n\n\n", total5);
                                system("pause");
                                valor_compra = 0;
                                break;
                            case 6:
                                total6 = valor_compra / 6;
                                printf("|>numero do cartao => %d\n|>cvv => %d\n|>data de vencimento => %d\n", cartao1, cvv, data_de_vencimento);
                                printf("|>sua rua=> %s QD=> %d LT=> %d\n", local, qd, lt);
                                printf("|>sua compra vai ficar em 6x no cartao R$%2.f\n\n\n\n", total6);
                                system("pause");
                                valor_compra = 0;
                                break;

                            default:
                                break;
                            }
                            system("cls");
                            system("color 9");
                            printf("%.*s\n", 100, "***************************************************************************************");
                            printf("|> Sua compra foi realizada com sucesso :-)!!\n");
                            printf("|> Obrigado pela sua preferencia, a SuperMarketing agradece a sua colaboracao:%.2f\n", valor_compra = 0);
                            printf("%.*s\n", 100, "***************************************************************************************");
                            system("pause");
                            break;
                        case 2:
                            // carregamento começo
                            system("color 2");
                            for (int i = 0; i < 10; i++)
                            {
                                printf("Carregando %d", i);
                                for (int j = 0; j < 30; j++)
                                {
                                    printf(".");
                                    Sleep(1);
                                }
                                printf("\r");
                                for (int j = 0; j < 60; j++)
                                {
                                    printf(" "); // apaga a linha anterior
                                }
                                printf("\r");
                                // carregamento fim
                            }
                            
                            system("cls");
                            srand(time(NULL));
                            system("color 9");
                            // começo do sorteio
                            printf("\n\n");
                            printf("Insira um numero para o sorteio de 1 a 10:\n");
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

                            printf("Numero Sorteado:%d\n", a);
                            system("pause");
                            // fim do sorteio

                            system("cls");
                            system("color 9");
                            printf("|>Pagando no cartao<|\n");
                            printf("|>Informe o numero do cartao =>");
                            scanf("%d", &cartao2);
                            printf("|>Informe o ccv =>");
                            scanf("%d", &cvv);
                            printf("|>Informe a data de vencimento =>");
                            scanf("%d", &data_de_vencimento);

                            system("cls");

                            printf("|>Numero do cartao => %d\n|>cvv => %d\n|>data de vencimento => %d\n\n\n\n", cartao2, cvv, data_de_vencimento);
                            system("pause");

                            system("cls");
                            total = valor_compra;

                            total = valor_compra;
                            printf("|>Numero do cartao => %d\n|>cvv => %d\n|>data de vencimento => %d\n\n\n", cartao2, cvv, data_de_vencimento);
                            printf("|>Sua compra vai ficar em 1x no cartao R$%2.f\n\n\n\n", total);
                            printf("|>sua rua=> %s QD=> %d LT=> %d\n", local, qd, lt);
                            printf("%.*s\n", 100, "***************************************************************************************");
                            printf("|> Sua compra foi realizada com sucesso :-)!!\n");
                            printf("|> Obrigado pela sua preferencia, a SuperMarketing agradece a sua colaboracao:");
                            printf("%.*s\n", 100, "***************************************************************************************");

                            system("pause");
                            valor_compra = 0;

                            break;
                        case 3:
                            // carregamento começo
                            system("color 2");
                            for (int i = 0; i < 10; i++)
                            {
                                printf("Carregando %d", i);
                                for (int j = 0; j < 30; j++)
                                {
                                    printf(".");
                                    Sleep(1);
                                }
                                printf("\r");
                                for (int j = 0; j < 60; j++)
                                {
                                    printf(" "); // apaga a linha anterior
                                }
                                printf("\r");
                                // carregamento fim
                            }
                            // printf("\nhti\n");
                            system("cls");
                            srand(time(NULL));
                            system("color 9");
                            // começo do sorteio
                            printf("\n\n");
                            printf("Insira um numero para o sorteio de 1 a 10:\n");
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

                            printf("Numero Sorteado:%d\n", a);
                            system("pause");
                            // fim do sorteio

                            FILE *file;
                            system("cls");
                            system("color 9");
                            file = fopen("recibo.txt", "w");
                            // fprintf(file,"nico1");

                            fprintf(file, "  BRADESCO| 000-0 | 00000.00000.000000.00000000 00000.\n\n"

                                          "|LOCAL DE PAGAMENTO:\tQualque banco Bradesco\n"
                                          "|>sua rua =>%s Sua QD %d Seu LT %d"
                                          "|DATA DO DOCUMENTO: %s | NUMERO DO DOCUMENTO: NF:554     | VENCIMENTO: %s\n\n"
                                          "|ESPECIE: R$(Reais)\t       | QUANTIDADE DE PRODUTO(S):         VALOR %.2f\n",
                                    local, qd, lt, datahora, datahora, valor_compra);
                            fprintf(file, "CARTEIRA/NOSSO NUMERO: 06/00000000000-0                          |AGENCIA / CODIGO CEDENTE: 1234-5/6789012-3\n");
                            fprintf(file, "|||||||||  ||||||||||||||| ||||||||||| |\n");
                            fclose(file);
                            system("start recibo.txt");

                            printf("|>sua rua=> %s QD=> %d LT=> %d\n", local, qd, lt);
                            printf("%.*s\n", 100, "***************************************************************************************");
                            printf("|> Sua compra foi realizada com sucesso :-)!!\n");
                            printf("|> Obrigado pela sua preferencia, a SuperMarketing agradece a sua colaboracao:");
                            printf("%.*s\n", 100, "***************************************************************************************");
                            valor_compra = 0;
                            system("pause");

                            break;
                        case 4:
                            // carregamento começo
                            system("color 2");
                            for (int i = 0; i < 10; i++)
                            {
                                printf("Carregando %d", i);
                                for (int j = 0; j < 30; j++)
                                {
                                    printf(".");
                                    Sleep(1);
                                }
                                printf("\r");
                                for (int j = 0; j < 60; j++)
                                {
                                    printf(" "); // apaga a linha anterior
                                }
                                printf("\r");
                                // carregamento fim
                            }
                           //
                            system("cls");
                            srand(time(NULL));
                            system("color 9");
                            // coomeço do sorteio
                            printf("\n\n");
                            printf("Insira um numero para o sorteio de 1 a 10:\n");
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

                            printf("Numero Sorteado:%d\n", a);
                            system("pause");
                            // fim do sorteio

                            srand(time(NULL));
                            int i;

                            for (i = 0; i < 8; i++)
                            {
                                printf("%d", rand() % 10);
                                if (i == 1)
                                {
                                    printf(".");
                                }
                                else if (i == 4)
                                {
                                    printf(".");
                                }
                                else if (i == 7)
                                {
                                    printf("/");
                                }
                            }
                            //gerador de cnpj
                            printf("0001\t");
                            printf("CNPJ:%d%d", rand() % 3, rand() % 2);
                            //gerador fim
                            printf("Pix por Email: supermarketoficial@gmail.com\n");
                            valor_compra = 0;
                            system("pause");

                            break;
                        case 5:
                            // carregamento começo
                            system("color 2");
                            for (int i = 0; i < 10; i++)
                            {
                                printf("Carregando %d", i);
                                for (int j = 0; j < 30; j++)
                                {
                                    printf(".");
                                    Sleep(1);
                                }
                                printf("\r");
                                for (int j = 0; j < 60; j++)
                                {
                                    printf(" "); // apaga a linha anterior
                                }
                                printf("\r");
                                // carregamento fim
                            }
                            // coomeço do sorteio
                            system("cls");
                            srand(time(NULL));
                            system("color 9");
                           
                            printf("Insira um numero para o sorteio:\n");
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

                            printf("Numero Sorteado:%d\n", a);
                            system("pause");
                            // fim do sorteio

                            system("color 9");
                            system("start QR_code.png");

                            printf("|>sua rua => %s QD => %d LT => %d\n", local, qd, lt);
                            printf("%.*s\n", 100, "***************************************************************************************");
                            printf("|> Sua compra foi realizada com sucesso :-)!!\n");
                            printf("|> Obrigado pela sua preferencia, a SuperMarketing agradece a sua colaboracao:");
                            printf("%.*s\n", 100, "***************************************************************************************");
                            valor_compra = 0;
                            system("pause");
                            break;

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
            // carregamento começo
            system("color 2");
            for (int i = 0; i < 10; i++)
            {
                printf("Carregando %d", i);
                for (int j = 0; j < 30; j++)
                {
                    printf(".");
                    Sleep(1);
                }
                printf("\r");
                for (int j = 0; j < 60; j++)
                {
                    printf(" "); // apaga a linha anterior
                }
                printf("\r");
                // carregamento fim
            }
            //sistema de registro
            system("cls");
            system("color 9");
            printf("|>digite o cpf para registrar =>");
            scanf(" %d", &cpf1);
            system("cls");
            printf("\n|>Informe a sua localizacao de entrega<|\n\n");
            printf("|>informe sua Rua =>");
            scanf(" %s", &local);
            printf("\n|>Informe sua QD =>");
            scanf("%d", &qd);
            printf("\n|>Informe seu LT =>");
            scanf("%d", &lt);
            system("cls");
            printf("seu cpf =>%d", cpf1);
            printf("\n|>sua rua=>%s QD=>%d LT=>%d\n\n\n\n", local, qd, lt);
            system("pause");
            system("cls");
            printf("\n|>Usuario Cadastrado!!!<|\n\n\n\n\n");
            system("pause");
            //registro fim

        }
        if (op == 3)
        {
            // carregamento começo
            system("color 2");
            for (int i = 0; i < 10; i++)
            {
                printf("Carregando %d", i);
                for (int j = 0; j < 30; j++)
                {
                    printf(".");
                    Sleep(1);
                }
                printf("\r");
                for (int j = 0; j < 60; j++)
                {
                    printf(" "); // apaga a linha anterior
                }
                printf("\r");
                // carregamento fim

            }
            system("cls");
            system("color 9");
            printf("Atendimento on-line:\nNumero Remoto => 62 9 40028922\nEmail => supermarketoficial@gmail.com\n\n\n\n");
            // prinf("Numero Remoto => 62 9 40028922\n");
            // printf("Email => supermarketoficial@gmail.com\n");
            system("pause");
        }
    } while (op != 0);

    return 0;
}