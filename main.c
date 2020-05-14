#include <stdio.h>

int main()
{
    int a,b;
    printf("first number a is\n");
    scanf("%d",&a);
    printf("second number b is\n");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d b=%d",a,b);
}
