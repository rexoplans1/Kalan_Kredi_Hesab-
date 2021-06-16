#include <stdio.h>
int sayici;
float x, toplam, limit, kalan_limit;
int main()
{
    toplam = 0;
    sayici = 0;
    printf("Kart limitini giriniz:");
    scanf("%f", &limit);
    printf("Harcamalarınızı giriniz(Cikis icin -1):");
    scanf("%f", &x);
    while (x != -1)
    {
        toplam = toplam + x;
        sayici = sayici + 1;
        printf("Harcamalarınızı giriniz(Cikis icin -1):");
        scanf("%f", &x);
    }
    kalan_limit = limit - toplam;
    if (kalan_limit < 0)
    {
        printf("Daha az harca");
    }
    else
        printf("Kalan limit =%f", kalan_limit);
    return 0;
}