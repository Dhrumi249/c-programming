#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#include "pr-8-functions.c"

void main() {
    int size;
    printf("Enter Array Size : ");
    scanf("%d",&size);

    int a[size][size];
    srand(time(0));

    input(size, &a[0][0]);

    printf("\n\nOutput of Without Cube of Elements : \n\n");
     for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    squareArray(size, &a[0][0]);

    printf("\n\nOutput of Cube of Elements : \n\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
}