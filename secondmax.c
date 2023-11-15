// finding the max and second max in a array 
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

// second max value using array 
int smx =INT_MIN;
for(int j=0;j<n;j++){
    if(arr[j]!=mx && smx<arr[j]) smx = arr[j];

}
printf("the smx value in a array is %d",smx);

    return 0 ;
}