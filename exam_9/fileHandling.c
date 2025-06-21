#include <stdio.h>

void main()
{
    FILE *even, *odd;

    even = fopen("even.txt", "w");
    odd = fopen("odd.txt", "w");

    if (even != '\0' && odd != '\0')
    {
        int a = 70;

        fprintf(even, "Even Numbers Between 50 to 70\n\n");
        for (int i = 50; i <= a; i++)
        {
            if (i % 2 == 0)
            {
                fprintf(even, "%d\t", i);
            }
        }

        fprintf(odd, "Odd Numbers Between 50 to 70\n\n");
        for (int i = 50; i <= a; i++)
        {
            if (i % 2 != 0)
            {
                fprintf(odd, "%d\t", i);
            }
        }

        fclose(even);
        fclose(odd);

        printf("Files Generated Successfully of Even and Odd Numbers...");
    }
    else
    {
        printf("Files Not Opened....");
    }
}