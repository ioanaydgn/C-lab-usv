#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    //printf("Hello W ,%s!\n",argv[1]);
    int v[10],i,n;
    n=argc-1;
    for(i=1;i<argc;i++)
        v[i-1]=atoi(argv[i]);

   for(i=0;i<n;i++)
    printf("%d, ",v[i]);
   printf("\b\b.");

    return 0;
}
