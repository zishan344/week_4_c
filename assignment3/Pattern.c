#include <stdio.h>
int main()
{
  int n,s,k=1;
  scanf("%d", &n);
  s= n-1;
  for (int i = 1; i <= (2*n)-1; i++)
  {
    for (int j = s; j > 0; j--)
    {
      printf(" ");
    }
    for (int j = 1; j <= k; j++)
    {
      if(i % 2 ==0){
        printf("-");
      }else{
        printf("#");
      }
    }
    if(i < n){
    s--;
    k+=2;
    }else{
    s++;
    k-=2;
    }
    printf("\n");
  }
  
  return 0;
}