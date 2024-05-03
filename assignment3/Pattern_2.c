#include <stdio.h>
int main()
{
  int n,s,k=1;
  scanf("%d", &n);
  s=n-1;
   for (int i = 1; i <= n; i++)
   {
    for (int j = s; j > 0; j--)
    {
      printf(" ");
    }
    for (int j = k; j > 0; j--)
    {
     printf("%d", j);
    }
    k++;
    s--;
    printf("\n");
    
   }
   
  return 0;
}