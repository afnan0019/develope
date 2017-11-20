#include<stdio.h>
int main()
{
 int s1,s2,s3,s4,s5,total=500,sum;
 float per;
   printf("enter the marks of 5 subjects");
   scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);


   sum=s1+s2+s3+s4+s5;
   printf("/nsum is%d",sum);
   

   per=(sum*100)/total;
   printf("/npercentage is%f",per);
 
   return 0;
}
