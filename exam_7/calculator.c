#include <stdio.h>
#include <conio.h>
#include "E:\C LANGUAGE\calculatorFunction.c"

void main()
{
    printf("\n\nCalculator\n\n");
    char exit = '1';
    for (int i = 0; exit != '0'; i++)
    {
        char ch;
        printf("\nPress +\n");
        printf("Press -\n");
        printf("Press *\n");
        printf("Press /\n");
        printf("Press %%\n");
        printf("Press 0 to Exit.\n");
        printf("\nEnter Your Choice : ");
        ch = getch();
        exit = (ch == '0') ? '0' : '1';

        switch (ch)
        {
            case '+':
            case '-':
            case '*':
            case '/':
            case '%':
                enterNum(ch);
                break;

            default: {
                if (ch != '0')
                {
                    printf("Invalid choice! Please Enter a Valid Operator.");
                }
            }    
            
        }
    }
    if (exit == '0')
        {
            printf("\n\nExiting... Do Not Press Any Key ........\n\n");
        }
}