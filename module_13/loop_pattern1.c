#include <stdio.h>
int main()
{
   
  int n;
  int k=1;
  scanf("%d", &n);
  // module finish
/*   for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <=k ; j++)
    {
      printf("*");
    }
    k++;
    printf("\n");
  } */
  //module homework
  for (int i = n; i > 0; i--)
  {
    k=i;
      for (int j = k; j >= 1 ; j--)
    {
     printf("*");
    }  
     
    // k--;
    printf("\n");
  }
  
  
  return 0;
}