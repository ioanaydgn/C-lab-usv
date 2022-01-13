#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <math.h>
#include <string.h>
int main()
{
    int oyun1[50],sans[50],joc1[41],devam[41];
    int cekilis,i,j,sayi,index=0,secenek;
    char opt,a;
    /*switch(opt)
    {
    case "1":
        printf("Pentru 6/49 = 'A' | Pentru 5/40 = B");
        scanf("%c",&a);
        if(a == 'A')
        {
           printf("Cekilisi gerceklestirmek icin 1 basiniz -->\nCikmak icin bir tusa basiniz -->\n");
    scanf("%d",&cekilis);
    if(cekilis==1)
    {
        for(i=0;i<6;i++)
        {
            printf("%d Kupon Elemani giriniz...\t",i+1);
            scanf("%d",&oyun1[i]);
        }
        for(i=0;i<6;i++)
        {
            sayi=rand()%10;
            for(j=0;j<=i;j++)
            {
                if(sans[j]==sayi)
                {
                    sayi=rand()%10;
                }
            }
            sans[i]=sayi;
        }
    }
    else
    {
        printf("Cekilisi gerceklestirmek icin 1 basiniz -->\nCikmak icin bir tusa basiniz -->\n");
    scanf("%d",&cekilis);
    if(cekilis==1)
    {
        for(i=0;i<6;i++)
        {
            printf("%d Kupon Elemani giriniz...\t",i+1);
            scanf("%d",&joc1[i]);
        }
        for(i=0;i<6;i++)
        {
            sayi=rand()%10;
            for(j=0;j<=i;j++)
            {
                if(sans[j]==sayi)
                {
                    sayi=rand()%10;
                }
            }
            sans[i]=sayi;
        }
    }
    }
    case:*/

    printf("Cekilisi gerceklestirmek icin 1 basiniz -->\nCikmak icin bir tusa basiniz -->\n");
    scanf("%d",&cekilis);
    if(cekilis==1)
    {
        for(i=0;i<6;i++)
        {
            printf("%d Kupon Elemani giriniz...\t",i+1);
            scanf("%d",&oyun1[i]);
        }
        for(i=0;i<6;i++)
        {
            sayi=rand()%10;
            for(j=0;j<=i;j++)
            {
                if(sans[j]==sayi)
                {
                    sayi=rand()%10;
                }
            }
            sans[i]=sayi;
        }
        printf("Cekilis gerceklestirildi...:)\n");

        for(i=0;i<6;i++)
        {
            if(oyun1[i]==sans[i])
            {
                index++;
            }
        }
        switch(index)
        {
        case 0:printf("nu ai gasit nico numar...\n"); break;
        case 1:printf("ai gasit o numar...\n"); break;
        case 2:printf("ai gasit doua numare...\n"); break;
        case 3:printf("ai gasit trei numare...\n"); break;
        case 4:printf("ai gasit patru numare...\n"); break;
        case 5:printf("ai gasit cinci numare...\n"); break;
        case 6:printf("ai gasit sase numare...\nAi castigat"); break;
        }
    }
    else
    {
        printf("Ai iesit la jucarii Loto ...");
    }
    return 0;
}
