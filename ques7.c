// fflush() is typically used for output stream only. Its purpose is to clear (or flush) the output buffer and move the buffered data to console (in case of stdout) or disk (in case of file output stream).
#include<stdio.h>
#include<string.h>
#include <stdlib.h>

struct library
{
    long acc_no;
    char title[40];
    char author[20];
    int price;
    int flag;
} a[10];

int n,count=0;

void add(){
    int k;
    printf("How many books you want to add?\n");
    scanf("%d",&k);
    for(int i=0; i<k; i++){
        printf("Book: %d\nEnter accession number = ",i+1);
        scanf("%d",&a[i].acc_no);
        fflush(stdin);
        printf("Enter book title: ");
        gets(a[i].title);
        fflush(stdin);
        printf("Enter name of the author: ");
        gets(a[i].author);
        printf("Price of book = Rs ");
        scanf("%d",&a[i].price);
        printf("Enter:  1. Issued and 2. Not issued");
        scanf("%d",&a[i].flag);
        count++;
    }
}

void display(){
    for(int i=0; i<count; i++){
        printf("BOOK: %d\n1. Accession Number = %ld\n2. Title = %s\n3. Author = %s\n4. Price = %d\n",i+1,a[i].acc_no,a[i].title,a[i].author,a[i].price);

        if(a[i].flag==1){
            printf("5. Issued\n");
        }else{
            printf("5. Not issued\n");
        }
    }
}

void book_cnt(){
    int not_issue = 0;
    for(int i=0; i<count; i++){
        if(a[i].flag==2){
            not_issue++;
        }
    }
    printf("Books available in library = %d\n",not_issue);
}

void book_author(){
    int check=0;
    char name[20];
    printf("Enter the name of author: ");
    fflush(stdin);
    gets(name);
    for(int i=0; i<count; i++){
        if(strcmp(name,a[i].author)==0){
            check++;
            printf("1. Accession Number = %ld\n2. Title = %s\n3. Author = %s\n4. Price = %d\n",a[i].acc_no,a[i].title,a[i].author,a[i].price);
        }
    }
    if(check==0){
        printf("No Book with this author available.");
    }
}

int main(){
    printf("     Library     \n");
    printf("1. Add book information \n2. Display book information \n3. List the count of books in a library \n4. List all books of given author \n5. Exit\n\n");
    while (1)
    {
        printf("Enter choice: ");
        scanf("%d",&n);
        switch (n)
        {
        case 1:
            add();
            break;

        case 2:
            display();
            break;

        case 3:
            book_cnt();
            break;
        
        case 4:
            book_author();
            break;

        case 5:
            exit(0);
        }
        printf("\n");
    }
    
    return 0;
}