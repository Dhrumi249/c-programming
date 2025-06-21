#include<stdio.h>

main() {
    int n;

    printf("\n\nEnter Size\n\n");
    printf("Enter The Size : ");
    scanf("%d",&n);

    int a[n];
    printf("\n\nEnter Elements\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter The Elements of Array[%d] : ",i);
        scanf("%d",&a[i]);
    }

    printf("\n\nOutput\n\n");
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            printf("%d, ",a[i]);
        }
    }
    
    
}