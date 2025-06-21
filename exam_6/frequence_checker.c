#include <stdio.h>

main()
{

    puts("\n\n Frequency Calculator Program \n");

    char name[20];
    printf("Enter Name : ");
    scanf("%s", &name);

    int len = 0;
    for (int i = 0; name[i] != NULL; i++)
    {
        len++;
    }

    int frq = 1;
    for (int i = 0; i < len; i++)
    {

        for (int j = i + 1; j < len; j++)
        {
            if (name[i] == name[j])
            {
                frq++;
                name[j] = '0';
            }
        }
        if(name[i] != '0') {
            printf("%c = %d\n", name[i], frq);
        }
        frq = 1;
    }

} 