#include <stdio.h>

main()
{
    char name[20];

    printf("Enter Name : ");
    gets(name);

    int len = 0;

    for (int i = 0; name[i] != NULL; i++)
    {
        len++;
    }

    char rev[len];
    int j = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        rev[j] = name[i];
        j++;
    }

    int cap = 1;
    for (int i = 0; i < len; i++)
    {
        if (rev[i] != name[i])
        {
            cap = 0;
        }
        
    }

    if (cap == 1)
    {
        puts("Its a Palindrom String.");
    }
    else{
        puts("Its not a Palindrom String.");
    }




// -----------------------------------------------------------------------
    // only for logic building 
    // int size;
    // printf("Enter row size : ");
    // scanf("%d",&size);

    // int arr[size];
    // for (int i = 0; i < size; i++)
    // {
    //     printf("Enter Array[%d] : ",i);
    //     scanf("%d",&arr[i]);
    // }
    
    // int rev[size];
    // int j = 0;
    // for (int i = size - 1; i >= 0; i--)
    // {
    //     rev[j] = arr[i];
    //     j++;
    // }
    
    // int cap = 1;
    // for (int i = 0; i < size; i++)
    // {
    //     if (rev[i] != arr[i])
    //     {
    //         cap = 0;   
    //     }
        
    // }
    
    // if (cap == 1)
    // {
    //     printf("Its a Palindrom.");
    // }
    // else{
    //     printf("Its not a palindrom.");
    // }
    

}