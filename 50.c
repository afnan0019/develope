#include<stdio.h>
void main()
{
int x,y,temp;
printf("\n\tenter the value of x and y");
scanf("%d%d",&x,&y);
printf("\n\tbefore swapping x=%d,y=%d",x,y);
temp=x;
x=y;
y=temp;
printf("after swapping x=%d,y=%d",x,y);
}
