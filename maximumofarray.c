#include<stdio.h>
int main(){
   int n,i;
  printf("Enter the size of the Array\n");
  scanf("%d",&n);

  int arr[n];
   printf("\nEnter the Elements of the Array\n");
   for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
     printf("\n The Elements of the Array are \n");
    for(i=0;i<n;i++){
     printf("%d  ",arr[i]);
   }
   int Max=arr[0];
   for(i=1;i<n;i++){
     if(arr[i]>Max)
     Max=arr[i];
   }
   printf("\nThe maximum element of the Array is %d ",Max);
}