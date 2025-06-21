#include <stdio.h>

struct StudentsMarks
{
    int roll_no;
    char name[20];
    int chem_marks;
    int math_marks;
    int phy_marks;
    int total;
    float percentage;
};


void main() {
    int n;
    printf("Enter Number of Students : ");
    scanf("%d",&n);

    struct StudentsMarks s1[n];
    int max = 300;

    printf("\n\nEnter Students Details\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter Details of Studend : %d\n",i + 1);
        printf("Roll No => ");
        scanf("%d",&s1[i].roll_no);

        printf("Name => ");
        scanf(" %[^\n]",&s1[i].name);

        printf("Chemistry Marks => ");
        scanf("%d",&s1[i].chem_marks);

        printf("Maths Marks => ");
        scanf("%d",&s1[i].math_marks);

        printf("Physics Marks => ");
        scanf("%d",&s1[i].phy_marks);

        printf("\n");
        printf("---------------------");
        printf("\n\n");

        s1[i].total = s1[i].chem_marks + s1[i].math_marks + s1[i].phy_marks;
        s1[i].percentage = (s1[i].total * 100) / max;
    }
    
    printf("\n\nOutput of Students Total And Percentage\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s (%d)\n",s1[i].name, s1[i].roll_no);
        printf("Chemistry => %d\n",s1[i].chem_marks);
        printf("Mathematics => %d\n",s1[i].math_marks);
        printf("Physics => %d\n",s1[i].phy_marks);
        printf("Total Marks => %d/%d\n",s1[i].total, max);
        printf("Percentage => %.2f%%\n",s1[i].percentage);
        printf("\n");
        printf("------------------------------------------");
        printf("\n\n");
    }
    
    
    
}