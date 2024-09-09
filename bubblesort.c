#include<stdio.h>
int main(){
   int n,i,j;
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
   
   for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){
     if(arr[j]>arr[j+1]){
             int temp=arr[j+1];
             arr[j+1]=arr[j];
             arr[j]=temp;
     }
    }
   }

    printf("\nAfter bubble sort the Array is :- ");
     for(i=0;i<n;i++){
     printf("%d  ",arr[i]);
   }
}