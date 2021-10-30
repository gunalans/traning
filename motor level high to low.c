/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int a,i,n,j,k;
int main()
{
    printf("enter tank level1 :");
    scanf("%d", &a);
    printf("enter max level :");
    scanf("%d", &n);
    for(i=a;i<=n;i++)
 {
     printf("\ncurrent level: %d",i);
     if(i==n)
     {
     printf("tank is full");
     }
 }
  for(j=n;j>=0;j--)
  {
      printf("\ncurrent level: %d",j);
      if(j==0)
      {
          printf("\ntank is empty");
    
      }
      
      
  }
  for(k=0;k<=n;k++)
  {
    printf("\ncurrent level:%d",k);
    if(k==n)
    {
        printf("\ntank is full");
    }
  }
  return 0;
     
}

  


