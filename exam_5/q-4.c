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
    
    printf("\n\nSum Row of Array\n\n");
    int r_num;
    int sumRow = 0;
    printf("Enter Row Number 0 to %d: ",row-1);
    scanf("%d",&r_num);
    for (int j = 0; j < col; j++)
    {
        sumRow += a[r_num][j];
    }
    printf("The Sum of Row = %d",sumRow);
    
    printf("\n\nSum Column of Array\n\n");
    int c_num;
    int sumCol = 0;
    printf("Enter Column Number 0 to %d: ",col-1);
    scanf("%d",&c_num);
    for (int i = 0; i < row; i++)
    {
        sumCol += a[i][c_num];
    }
    printf("The Sum of Column = %d",sumCol);
    
}
