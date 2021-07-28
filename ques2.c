#include<stdio.h>
#include<string.h>

union student
{
    int rollno;
    char name[20];
    int mark;
} a[15];

int main(){
    int N;
    printf("Enter the number of student: ");
    scanf("%d",&N);
    for(int i = 0; i<N; i++){
        int rn = 0,m=0;
        char n[20];
        printf("\nEnter details of student %d\n", i+1);

        printf("Enter roll no: ");
        scanf("%d", &rn);

        fflush(stdin);
        printf("Enter name: ");
        gets(n);

        printf("Enter mark: ");
        scanf("%d",&m);

        a[i].rollno = rn;
        printf("Roll No. = %d\n",a[i].rollno);

        strcpy(a[i].name,n);
        printf("Name = %s\n",a[i].name);

        a[i].mark = m;
        printf("Mark in subject = %d\n",a[i].mark);
    }
    return 0;
}
