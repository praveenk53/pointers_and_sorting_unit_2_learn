#include<stdio.h>
#include<string.h>
int main(){
  char Admin[10],password[20];
  printf("enter the admin name and password:");
  scanf("%s %s",Admin,password);
  if(strcmp(Admin,"Admin123")==0 && strlen(password)>=8)
  {
    printf("successfull");
  }
    else{
      printf("wrong");
    }
  return 0;
}