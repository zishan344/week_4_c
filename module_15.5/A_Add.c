#include <stdio.h>
int fun (int a, int b){
  int addition = a+b;
  return addition;
}
int main()
{
   int a, b;
   scanf("%d %d",&a,&b);
   int output = fun(a,b);
   printf("%d", output);
  return 0;
}