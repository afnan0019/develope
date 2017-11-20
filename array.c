  #include<stdio.h>
  int main()
{
   int n,sum=0,c,array[100];
   printf("enter the number of integer you want to add\n");
   scanf("%d",&n);

   printf("enter %d integers\n",n);
   for(c=0;c<n;c++)
   {
    scanf("%d",&array[c]);
    sum+=array[c];
   }
     printf("sum=%d",sum);
   
 return  0;

 }
