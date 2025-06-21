#include<stdio.h>

main() {
    int row, col;

    printf("\n\nEnter Rows and Columns\n\n");
    printf("Enter Rows : ");
    scanf("%d",&row);
    printf("Enter Columns : ");
    scanf("%d",&col);

    int a[row][col];
    printf("\n\nEnter Elements\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter Elements of Array[%d , %d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    int max = a[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] > max)
                max = a[i][j];
        }
        
    }
    
    printf("\n\nLargest Number = %d",max);
}