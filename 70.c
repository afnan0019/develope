#include<stdio.h>
void main()
{
int a,b;
printf("\nenter the value of a and b");
scanf("%d%d",&a,&b);
printf("\nbefore swapping\na=%d,\nb=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\nafter swapping\na=%d,\nb=%d",a,b);
}
