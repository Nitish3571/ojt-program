
//Write a C program to Swap the two values using call by value and call by reference

//call by value

// #include<stdio.h>
// int main()
// {
//     int a,b,temp;
//     printf("Enter the value of a=");
//     scanf("%d",&a);
//     printf("Enter the value of b=");
//     scanf("%d",&b);
// printf("Before swaping a=%d \ b=%d",a,b);
//     temp=a;
//     a=b;
//     b=temp;
// printf("After swaping a=%d \ b=%d",a,b);
// }


//call by Reference

#include<stdio.h>
int main()
{
    int a,b;
    char *ptr1,*ptr2;
    ptr1=&a;
    ptr2=&b;
    printf("Enter the value of a=");
    scanf("%d",&a);
    printf("Enter the value of b=");
    scanf("%d",&b);
printf("Before swaping a=%d \ b=%d",a,b);
    a=*ptr1+*ptr2;
    b=*ptr1-*ptr2;
    a=*ptr1-*ptr2;
printf("After swaping a=%d \ b=%d",a,b);
}
