#include <stdio.h>
int main()
{
  int n,k=1,s=0;
  scanf("%d",&n);
      for (int i = 1; i <= n; i++)
   {
    for (int j = n-i; j > 0 ; j--)
    {
     printf(" ");
    }
    for (int j = 1; j <= k; j++)
    {
    // printf("%d - %d ", j, k);
     printf("*");
    }
    k+=2;
    printf("\n");
   }  

printf("\n \n");

    for (int i = n; i > 0; i--)
    {
  
     for (int j = 0; j < s ; j++)
     {
       printf(" ");
     }  
    k=i+(i-1);
    for (int j = k; j>0; j--)
    {
      printf("*");
    };
      
     s++;
     printf("\n");
   }   
 
 
  return 0;
}