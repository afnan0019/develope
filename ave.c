  #include<stdio.h>
  int main()
{
  int marks[10],i,n,sum=0,average;
  printf("enter the number");
  scanf("%d",&n);
    for(i=0;i<n;i++);
   {
      printf("enter the number %d",i+1);
      scanf("%d",&marks[i]);
      sum+=marks[i];
   }
      average=sum/n;
      printf("average of numbers is %d",average);
      return 0;
}
     
