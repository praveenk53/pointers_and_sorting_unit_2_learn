#include<stdio.h>
int main(){
  int a , b;
  printf("Enter the two integers:");
  scanf("%d %d",&a,&b);
  int *p=&a;
  int *q=&b;
  *p=*p+*q -(*q=*p);
  printf("After swapping the varaible:");
  printf("a is %d\n",a);
  printf("b is %d\n",b);
return 0;
}