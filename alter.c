     #include<stdio.h>
     int main()
 {
     int array[10];
     int i,j,temp;


     printf("enter the elements of an aaray\n");
     for(i=0;i<10;i++)
         scanf("%d",&array[i]);
             

          printf("\nalternate  of given array is\n");
          for(i=0;i<10;i+=2)
            printf("\n%d",array[i]);
     return 0;
 }
