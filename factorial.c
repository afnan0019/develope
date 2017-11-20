    #include<stdio.h>
    int main()
 {
    int n,i,factorial;
    printf("enter an integer");
    scanf("%d",&n);
    if(n<0)
   {
     printf("error");
   }
   else
   {
     for(i=1;i<=n;++i)
   {
     factorial=factorial*i;
   }
   printf("\nThe factorial %d is %d",n,factorial);
   return 0;
   }
 } 
