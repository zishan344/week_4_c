#include <stdio.h>
int main(void){
  int n;
  scanf("%d", &n);
  int arr[n];
  for(int i = 0; i < n; i++){
    scanf("%d",&arr[i]);
  }
  for(int i = 0; i < n ; i++){
    for(int j = i+1; j < n; j++){
      int temp;
      temp=arr[i];
      if(arr[i]>arr[j]){
        arr[i]=arr[j];
        arr[j]=temp;
      }  
    }
  };
   for(int i = 0; i < n; i++){
    printf("%d ", arr[i]);
  }
  return 0;
}