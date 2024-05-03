#include <stdio.h>
int count_before_one(int arr[],int n){
  int beforeOne=0;
 for (int i = 0; i < n; i++)
 {
  
  if(arr[i] == 1){
    break;
  } 
  beforeOne++;
 }
 return beforeOne;
}


int main()
{
  int n;
  scanf("%d",&n);
  int A[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d",&A[i]);
  }
  
  int beforeOne= count_before_one(A,n);
  printf("%d",beforeOne);
  return 0;
}