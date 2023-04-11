
//write a C program to create a Calculater using a pointer

#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul,mode;
    float div;
    char *ptr1,*ptr2;
    ptr1=&a;
    ptr2=&b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    sum=*ptr1+*ptr2;
    sub=*ptr1-*ptr2;
    mul=*ptr1**ptr2;
    div=*ptr1/ *ptr2;
    mode=*ptr1%*ptr2;
    printf("Sum of a and b=%d \n",sum);
    printf("Sub of a and b=%d \n",sub);
    printf("Mul of a and b=%d \n",mul);
    printf("Div of a and b=%f \n",div);
    printf("Mode of a and b=%d \n",mode);
    return 0;
}