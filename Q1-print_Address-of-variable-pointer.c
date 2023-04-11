
//Write a C program to print the address of variable using a pointer

#include<stdio.h>
int main()
{
    int a=10;
    char *ptr;
    ptr=&a;
    int b=ptr+2;    //using arithmatic operator
    printf("Value of a=%d\n",a);
    printf("Value of *ptr=%d\n",*ptr);
    printf("Address of a=%d\n",&a);
    printf("Address of ptr=%d\n",ptr);
    printf("Address of b=%d\n",b);
    return 0;
 }