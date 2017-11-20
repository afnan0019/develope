   #include<stdio.h>
   int main()
 {
   int n,reversedinteger=0,remainder,originalinteger;
   printf("enter any integer");
   scanf("%d",&n);
   originalinteger=n;
   while(n!=0)
  {
   remainder=n%10;
   reversedinteger=reversedinteger*10+remainder;
   n=n/10;
  }
   if(originalinteger==reversedinteger)
  {
    printf("%d is a palindrome number",originalinteger);
  }
   else
  { 
    printf("%d is not a palindrome number",originalinteger);
  }
   return 0;
 }
