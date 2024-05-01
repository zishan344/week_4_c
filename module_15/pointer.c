#include <stdio.h>
int main()
{
  int n= 4;
  int *po = &n;
  printf("%p\n%p", &n, po);
  printf("\n \n");
  // printf("%p\n%p", &n, &po);
  // n=0 ;
*po =0;
// int *po2= po;
  // printf("%d\n",*po2);
  printf("%d\n",n);
  return 0;
}