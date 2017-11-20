 #include<stdio.h>
    int main()
 { 
     int m,n,c,d,first[10],second[10],sum[10];
     printf("enter number of rows and columns\n");
     scanf("%d%d",&m,&n);
     

     printf("enter the elements of first matrix\n");
      for(c=0;c<m;c++)
        for(d=0;d<n;d++)
          scanf("%d",&first[c][d]);
    
    
