#include <stdio.h>
#include <time.h>

int main()
{
    time_t zaman;
    struct tm *zmn;

    time(&zaman);
    zmn = localtime(&zaman);

    int parola;
    parola = (zmn -> tm_hour * 100) + (zmn -> tm_min);

    int sifre;
    printf("Lutfen sifrenizi girin: ");
    scanf("%d" , &sifre);

    if(sifre == parola){
        printf("Dogru sifre girdiniz.\n");
    }

    else{
        printf("Yanlis sifre girdiniz.\n");
    }

    return 0;
}
