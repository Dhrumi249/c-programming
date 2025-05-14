#include <stdio.h>
#include <conio.h>

void main()
{
    char alphabet = 'a';
    clrscr();

    while (alphabet <= 'z')
    {
        printf("%c ", alphabet);
        alphabet += 4;
    }

    getch();
}
