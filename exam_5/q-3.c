#include<stdio.h>

main() {
    int row, col;
    printf("Enter Rows : ");
    scanf("%d",&row);

    printf("Enter Columns : ");
    scanf("%d",&col);

    int a[row][col];
    printf("\n\nElements Input\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter The Elements of Array [%d , %d] : ",i ,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\nTranspose matrix.\n\n");
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d",a[j][i]);
        }
        printf("\n");
    }
    
}