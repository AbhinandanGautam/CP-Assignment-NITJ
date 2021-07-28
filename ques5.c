#include <stdio.h>
#include <string.h>

struct phone
{
    char f_name[10];
    char l_name[10];
    int landline;
    int mobile;
} a[10];
int n;

void dis_book()
{
    for (int i = 0; i < n; i++)
    {
        printf("%d. %s %s   %d   %d\n", i + 1, a[i].f_name, a[i].l_name, a[i].landline, a[i].mobile);
    }
}

void modify_book()
{
    int i, x, l1, m1;
    char s1[10], s2[10];
    printf("Enter the entry number to be modified: ");
    scanf("%d", &i);
    printf("Information you want to update:\n1. First name\n2. Last name\n3. Landline\n4. Mobile\n");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("Enter updated first name: ");
        scanf("%s", s1);
        strcpy(a[i - 1].f_name, s1);
        break;

    case 2:
        printf("Enter updated last name: ");
        scanf("%s", s2);
        strcpy(a[i - 1].l_name, s2);
        break;

    case 3:
        printf("Enter updated Landine Number: ");
        scanf("%s", l1);
        a[i - 1].landline = l1;
        break;

    case 4:
        printf("Enter updated Mobile Number: ");
        scanf("%s", m1);
        a[i - 1].mobile = m1;
        break;
    }
    dis_book();
}

int main()
{
    printf("Numbers of enteries you want to make = ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Entry: %d\nFirst name: ", i + 1);
        scanf("%s", a[i].f_name);
        printf("Last name: ");
        scanf("%s", a[i].l_name);
        printf("Landline number: ");
        scanf("%d", &a[i].landline);
        printf("Mobile number: ");
        scanf("%d", &a[i].mobile);
    }

    int x;
    printf("Operations: \n1. Modify\n2. Display\n");
    scanf("%d", &x);
    if (x == 2)
    {
        dis_book();
    }
    else
    {
        modify_book();
    }

    return 0;
}