#include<stdio.h>
#include<math.h>

struct complex
{
    int real,img;
} a,b,c;

int main(){
    printf("Enter the first complex number : a+ib \n");
    printf("a = "); scanf("%d",&a.real);
    printf("b = "); scanf("%d",&a.img);
    printf("\n");
    printf("Enter the second complex number : c+id \n");
    printf("c = "); scanf("%d",&b.real);
    printf("d = "); scanf("%d",&b.img);
    printf("\n");
    printf("Followings are operations: \n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Modulus\n\n");

    for(;;){
    printf("In which operation you want to perform?\n");
    int n;
    scanf("%d",&n);
    if(n==1){
        c.real = a.real + b.real;
        c.img = a.img + b.img;
        printf("Addition = %d+i(%d)\n\n",c.real,c.img);
    }
    else if(n==2){
        c.real = a.real - b.real;
        c.img = a.img - b.img;
        printf("Subtraction = %d+i(%d)\n\n",c.real,c.img);
    }
    else if(n==3){
        c.real = a.real*b.real - a.img*b.img;
        c.img = a.real*b.img + a.img*b.real;
        printf("Multiplication = %d+i(%d)\n\n",c.real,c.img);
    }
    else if(n==4){
        float z1 = sqrt(a.real*a.real + a.img*a.img);
        float z2 = sqrt(b.real*b.real + b.img*b.img);
        printf("Modulus of first number = %0.3f\n",z1);
        printf("Modulus of second number = %0.3f\n\n",z2);
    }
    else{
        printf("Enter correct choice\nRestart program\n");
        break;
    }
    }

    return 0;
}