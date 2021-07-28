#include <stdio.h>

struct customer
{
    int acc_no;
    char name[20];
    int balance;
} a[5];

void insuff(struct customer b)
{
    printf("Account Number = %d\n", b.acc_no);
    printf("Name = %s", b.name);
}
int n;
void operations()
{
    int acc, choice, amount, temp = 0;
    printf("\nEnter your account number\n");
    scanf("%d", &acc);
    for (int i = 0; i < n; i++)
    {
        if (acc == a[i].acc_no)
        {
            printf("\nHi %s, What would you like to do?\n", a[i].name);
            temp = i;
        }
    }
    printf("\n1. Deposit\n2. Withdrawl\n");
    scanf("%d", &choice);
    printf("\nEnter the Amount\n");
    scanf("%d", &amount);
    if (choice == 1)
    {
        a[temp].balance += amount;
        printf("Amount deposited ---- Balance = Rs %d\n", a[temp].balance);
    }
    else if (choice == 2)
    {
        if (a[temp].balance - amount < 100)
        {
            printf("Insufficient Balance\n");
        }
        else if (a[temp].balance < 100)
        {
            printf("Balance is too low!\n");
        }
        else
        {
            a[temp].balance -= amount;
            printf("Withdrawl Approved ---- Balance = Rs %d\n", a[temp].balance);
        }
    }
}

int main()
{
    printf("Enter number of customers.\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("CUSTOMER : %d\n", i + 1);
        printf("Account Number = ");
        scanf("%d", &a[i].acc_no);
        fflush(stdin);
        printf("Name : ");
        gets(a[i].name);
        printf("Balance Amount = Rs ");
        scanf("%d", &a[i].balance);
    }
    printf("\n");
    // part 1
    printf("Customers with balance less than Rs 100 : \n");
    for (int i = 0; i < n; i++)
    {
        if (a[i].balance < 100)
        {
            insuff(a[i]);
        }
    }
    // part 2
    operations();

    return 0;
}