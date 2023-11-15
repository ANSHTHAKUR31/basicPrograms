// finding the max and min value in array
#include<stdio.h>
#include<limits.h>
int main (){
int arr[]={ 1,2,3,4,5,12,19};
int n = sizeof(arr)/4;

// finding max value in a array
int mx =INT_MIN;
for(int i=0;i<n;i++){
    if(mx<arr[i]) mx=arr[i];
}
printf("the max value in a array is %d",mx);
printf("\n");

// min value using array 
int mn =INT_MAX;
for(int j=0;j<n;j++){
    if(mn>arr[j]) mn=arr[j];
}
printf("the min value in a array is %d",mn);

    return 0 ;
}