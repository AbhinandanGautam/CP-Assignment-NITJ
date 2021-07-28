#include<stdio.h>

struct Employee_1
{
    int id;
    char name[20];
    long salary;
};

union Employee_2
{
    int id;
    char name[20];
    long salary;
};

int main(){
    // size of struct = size of int + 20*size of char + size of long = 4+20+4 = 28
    printf("Size of structure Employee 1 = %d\n",sizeof(struct Employee_1 ));

    // size of union = size of max size element = 20
    printf("Size of union Employee 2 = %d\n",sizeof(union Employee_2 ));

    return 0;
}