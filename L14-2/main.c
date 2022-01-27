#include <stdio.h>
#include <stdlib.h>

int fNrCuv(char s[]);
char fAfisareOpt(void);
int main()
{
    char *fraza1,*fraza2,*fraza3;
    FILE *fp,*outf;
    char c;
    int nrCuv;
    fraza1 = (char*) malloc(1000);
    fraza2 = (char*) malloc(1000);
    fraza3 = (char*) malloc(1000);
    //FILE *pf,*outf;
    git:
    printf("Aplicatie menu...\n  ");
    do
    {
        switch(fAfisareOpt())
        {
        case 'E':
            exit(0);
        case 'C':
            puts("Introdu o fraza....");
            fflush(stdin);
            scanf("%s",&fraza1);
            scanf("%s",&fraza2);
            scanf("%s",&fraza3);

            fp=fopen("input.txt","a+");
            fprintf(fp,"\n%s \n%s \n%s",fraza1,fraza2,fraza3);
            fclose(fp);
            while(!feof(fp))
            {
                fscanf(fp,"%s %s %s",&fraza1,&fraza2,&fraza3);

                printf("Fraza 1: %sn \n Fraza 2: %sn \n Fraza 3: %snn",fraza1,fraza2,fraza3);
            }
            fclose(fp);
            getchar();
            break;
        case 'A':
            puts("Fraza este: ");
            char frazalarmk;
            if((fp=fopen("input.txt","r")) == NULL)
                printf("Not Found");
            else{
                while(fscanf(fp,"%s",&frazalarmk)!=EOF)
                    printf("%s\n",frazalarmk);
                fclose(fp);
            }
           /// puts(fraza);
            getch();
            break;
        /*case 'F':
            nrCuv = fNrCuv( fraza );
            printf("Fraza are %d cuvinte\n", nrCuv );
            getch();
            break;*/
        }
    }
    while(!0);
    return 0;
}
char fAfisareOpt(void)
{
    system("cls");
    printf("C. Un text pe mai multe linie\n");
    printf("A. Afisare text\n");
    printf("F. Numara nr. de cuvinte din text\n");
    printf("D. Vom serie fiecare cuvant pe o linie\n");
    printf("E. Exit\n");

    return toupper(getch());
}
/*void afisare(int n, int m, int mat[10][10])
{
    FILE *pf,*outf;

    pf=fopen("input.txt","rt");

    if(pf==NULL)///test
{
    printf("\nEroare la deschiderea fisierului !");
    return -1;
}
    else{
        ///prelucrari
        fscanf(pf,"%d",&n);
        fscanf(pf,"%d",&m);
        for(i=0;i<n;i++)
            for(j=0;j<m;j++){
            fscanf(pf,"%d",&mat[i][j]);
            }

    }
    fclose(pf);
    outf=fopen("out.txt","w");
    if(outf=NULL){
        printf("ERROR");
        return -1;
    }
    fprintf(outf,"%d\n",n*m);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++){
        fprintf(outf,"%d,",mat[i][j]);
        }
    fclose(outf);
}
void citeste(int n, int m, int mat[10][10])
{
    FILE *pf,*outf;

    pf=fopen("input.txt","rt");

    if(pf==NULL)///test
{
    printf("\nEroare la deschiderea fisierului !");
    return -1;
}
    else{
        ///prelucrari
        fscanf(pf,"%d",&n);
        fscanf(pf,"%d",&m);
        for(i=0;i<n;i++)
            for(j=0;j<m;j++){
            fscanf(pf,"%d",&mat[i][j]);
            }

    }
}
*/
int fNrCuv(char s[])
{
    int i, nrCuv;
    for(i=0,nrCuv=0;i<strlen(s)-1;i++)
    {
        if(s[i]==' ' && s[i+1] != ' ')
            nrCuv++;
    }
    nrCuv += (s[0]==' '? 0:1);
    return nrCuv;
}
