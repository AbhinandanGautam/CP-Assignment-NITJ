#include <stdio.h>
#include <string.h>

struct student
{
    int rollno;
    char name[20];
    int submarks[6];
} s[5];

void Display(struct student s[5])
{
    printf("Name   Roll no     Marks\n");
    for (int i = 0; i < 5; i++)
    {
        printf(" %s     %d        ", s[i].name, s[i].rollno);
        for (int j = 0; j < 6; j++)
        {
            printf("%d  ", s[i].submarks[j]);
        }
        printf("\n");
    }
}

void total(struct student s[5])
{
    printf("Roll No.  Total Marks\n");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d   ", s[i].rollno);
        int sum = 0;
        for (int j = 0; j < 6; j++)
        {
            sum += s[i].submarks[j];
        }
        printf("    %d \n", sum);
    }
}

void hiandlo(struct student s[5])
{
    int hm = -1, lm = 101, rn1, rn2;
    char n1[20], n2[20];
    for (int i = 0; i < 5; i++)
    {
        int sum = 0;
        for (int j = 0; j < 6; j++)
        {
            sum += s[i].submarks[j];
        }
        if (sum > hm)
        {
            hm = sum;
            rn1 = s[i].rollno;
            strcpy(n1, s[i].name);
        }
        if (sum < lm)
        {
            lm = sum;
            rn2 = s[i].rollno;
            strcpy(n2, s[i].name);
        }
    }
    printf("%s having Roll NO. %d got highest marks = %d\n", n1, rn1, hm);
    printf("%s having Roll NO. %d got lowest marks = %d\n", n2, rn2, lm);
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter roll no: ");
        scanf("%d", &s[i].rollno);

        printf("Enter name: ");
        scanf(" %[^\n]%*c", s[i].name);

        printf("Enter marks: ");
        for (int j = 0; j < 6; j++)
        {
            scanf("%d", &s[i].submarks[j]);
        }
    }

    Display(s);
    printf("\n");

    total(s);
    printf("\n");

    hiandlo(s);
    printf("\n");

    return 0;
}
