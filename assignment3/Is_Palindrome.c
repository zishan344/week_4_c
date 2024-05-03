#include <stdio.h>
#include <string.h>
  int is_palindrome(char str[1001]){
    int palindrome=1;
    int st_length=strlen(str);
    char pl[1000];
    
    for (int i = 0; i < st_length; i++) {
        pl[i] = str[st_length - i - 1];  
    }
      

    for (int i = 0; i < strlen(str); i++)
    {
     if(str[i] != pl[i]){
      palindrome=0;
      break;
     }
    }
    
  return palindrome;
  
}  
int main()
{
  char str[1001];
  fgets(str, 1001, stdin);
  int palindrome=  is_palindrome(str);
    if(palindrome){
    printf("Palindrome");
  }else{
    printf("Not Palindrome");
  }  
  // printf("palindrome: %d\n", palindrome);
  return 0;
}