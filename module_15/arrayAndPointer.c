#include <stdio.h>
int main()
{
   int arr[6]={10,20,30,40,50,60};
   //array is a pointer
   printf("%d\n",*arr);
  printf("%d\n",*(arr+1));
  printf("%d\n",*(2+arr));
  printf("%d\n",arr[3]);
  printf("%d\n",4[arr]);

  return 0;
}