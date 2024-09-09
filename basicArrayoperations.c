#include<stdio.h>

//sum function to calculate sum 
int Sum(int arr[],int n){
  int s=0,i;
  for(i=0;i<n;i++){
      s+=arr[i];
  }
  return s;
}
//function to perform average
float Avg(int arr[],int n){
  float sum=Sum(arr,n);
  return sum/n;
}
//function to print the maximum of the array
int Max(int arr[],int n){
  int max=arr[0];
  int i;
  for(i=1;i<n;i++){
    if(arr[i]>max)
    max=arr[i];
  }
  return max;
}
//function to print the minimum of the array
int Min(int arr[],int n){
  int min=arr[0];
  int i;
  for(i=1;i<n;i++){
    if(arr[i]<min)
    min=arr[i];
  }
  return min;
}
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
   
   printf("\nThe sum of Array elements is %d ",Sum(arr,n));
   printf("\nThe Average of Array elements is %f ",Avg(arr,n));
   printf("\nThe Maximum Element of Array is %d ",Max(arr,n));
   printf("\nThe Minimum Element of Array is %d ",Min(arr,n));

}