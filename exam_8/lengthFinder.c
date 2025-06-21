#include <stdio.h>

void main()
{

    char name[20];
    printf("Enter Name : ");
    scanf("%[^\n]", &name);

    char *ptr;
    ptr = &name[0];

    int len = 0;
    for (int i = 0; *(ptr + i) != '\0'; i++)
    {
        int mark = '0';
        if (*(ptr + i) == ' ')
        {
            mark = '1';
        }
        if (mark != '1')
        {
            len++;
        }
        mark = '0';
        
    }

    printf("The Length of String Without Counting Space \t: %d",len);
}