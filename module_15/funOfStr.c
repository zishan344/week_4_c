#include <stdio.h>
#include <string.h>
char fun (char arr[]){
printf("%d",strlen(arr));
printf("%s",arr);
}
int main()
{
  char str[20]="hello";
  fun(str);
  return 0;
}