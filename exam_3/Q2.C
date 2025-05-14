#include<stdio.h>
#include<conio.h>

main()
{
	int n,n1=0;
	clrscr();
	printf("enter the number");
	scanf("%d",&n);
	do
	{
		n=n/10;
		n1++;

	}
	while(n!=0);
	printf("%d\n",n1);
	getch();
}	