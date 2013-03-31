#include <stdio.h>

int main()
{
    int p,q,r,s,i,j,k;

    printf("Enter number of rows and colums in first matrix\n");
    scanf("%d %d" ,&p,&q);

    printf("\n");

    printf("Enter number of rows and colums in the second matrix\n");
    scanf("%d %d" ,&r,&s);

    printf("\n");

    if(q!=r)
    {
        printf("Number of columns of  Matrix 1 must match the number of rows of Matrix 2\n");
        return 1;
    }

    int m1[p][q], m2[r][s],result[p][s];

    printf("Enter values for first matrix\n");
    for(i=0;i<p;i++)
        for(j=0;j<q;j++)
            scanf("%d" ,&m1[i][j]);

    printf("\n");

    printf("Matrix 1: \n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
            printf("%d " ,m1[i][j]);

        printf("\n");

    }

    printf("\n");


    printf("Enter values for the second matrix\n");
    for(i=0;i<r;i++)
        for(j=0;j<s;j++)
            scanf("%d" ,&m2[i][j]);

    printf("\n");

    printf("Matrix 2: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<s;j++)
            printf("%d " ,m1[i][j]);

        printf("\n");
    }

    printf("\n");

    /* Calculation */

    for(i=0;i<p;i++)
        for(j=0;j<s;j++)
        {
            result[i][j]=0;

            for(k=0;k<r;k++)
              result[i][j] = (m1[i][k] * m2[k][j]) + result[i][j];
        }

    /* Results */

    printf("Resultant Matrix: \n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<s;j++)
            printf("%d " ,result[i][j]);
        printf("\n");
    }

    printf("\n\n");

  }