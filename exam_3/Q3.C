#include <stdio.h>
#include <conio.h>

main()
{
    int number, temp, fd, ld;
    clrscr();

    printf("Enter your number: ");
    scanf("%d", &number);

    temp = number;

    ld = temp % 10; 

    while (temp >= 10)
    {
        temp = temp / 10;
    }
    fd = temp;

    printf("Addition of first and last digit = %d\n", fd + ld);

    getch();
}
