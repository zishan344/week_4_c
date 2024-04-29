#include <stdio.h>
int main()
{
   int n, value,flag=0;
   
   scanf("%d", &n);
   int arr[n];
   for (int i = 0; i < n; i++)
   {
    scanf("%d", &arr[i]);
   }
   scanf("%d", &value);
   for (int i = 0; i < n; i++)
   {
     for (int j = i+1; j < n; j++)
     {
      if(arr[i]+arr[j]==value){
        flag=1;
      }
     }
   }
   if(flag==1){
    printf("Yes");
   }else{
    printf("No");
   }
  return 0;
}