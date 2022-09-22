#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[])
{
    time_t agora;
    char datahora[100];
    
    /* data */ 
    agora = time(NULL);

    /* horas */
    strftime(datahora, sizeof(datahora), "%d.%m.%Y - %H:%M:%S", localtime(&agora));
    
    printf("Data/Hora: %s\n", datahora);
    



    return 0;
}