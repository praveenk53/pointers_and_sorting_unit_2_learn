#include<stdio.h>
void bubble_sort(int *arr,int n)
{
  for (int i=0;i<n;i++)
  {
    int *p=arr;
    int *q=arr+1;
    for(int j=0;j<n-i-1;j++)
    {
      if (*p>*q){
        int temp =*p;
        *p=*q;
        *q=temp;
      }
      p++;
      q++;

    }
  }
}
int main()
{
  int n ;
  printf("Enter the number array");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the array elements %d\n",n);
  for(int i=0 ; i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    bubble_sort(arr,n);
      printf("sorted array:");
      for(int *p=arr;p<arr+n;p++){
      {
        printf("%d",*p);
      }
    }
    return 0;
}