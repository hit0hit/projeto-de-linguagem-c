/*#include <stdio.h>
int main()
{
    int i;

    for (i = 0; i < 11; i++)
    {
        printf("%d ", rand() % 20);
    }
}*/

#include <stdio.h>
#include <time.h>
int main()
{
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
    printf("0001\t");
    printf("CNPJ:%d%d", rand() % 3, rand() % 2);
}