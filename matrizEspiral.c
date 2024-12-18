#import <stdio.h>

//tamanho máximo da matriz foi colocado como 100


void geraMatrizEspiral (int matriz [100][100], int N)
{
    int i, j;
    int num = 1;
    int inicio = 0;
    int tam = N;


    while (tam > 0)
    {
        /* esq para dir. */
        for (j = inicio; j < inicio + tam; j++)
            matriz [inicio][j] = num++;

        /* cima pra baixo. */
        for (i = inicio+1; i < inicio + tam; i++)
            matriz [i][inicio+tam-1] = num++;

        /* dir para esq. */
        for (j = inicio+tam-2; j >= inicio; j--)
            matriz [inicio+tam-1][j] = num++;

        /* baixo para cima. */
        for (i = inicio+tam-2; i > inicio; i--)
            matriz [i][inicio] = num++;

        tam -= 2;
        inicio++;
    }

}

int main()
{
    int matriz[100][100]= {0};
    int i,j;
    int N;

    printf("Informe o tamanho da matriz quadrada: ");
    scanf("%d",&N);

    geraMatrizEspiral(matriz, N);
    printf("\n");

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("%5d",matriz[i][j]);
        }
        printf("\n");
    }

    return 0;

}
