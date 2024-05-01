#include <stdio.h>
int fun(int *p){
  *p = 10;
}
int main()
{
   int p = 0;
   printf("%d\n", p);
   fun(&p);
   printf("pointer function use korar por\n");
   printf("%d\n", p);
  return 0;
}