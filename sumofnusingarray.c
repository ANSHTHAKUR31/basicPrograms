// sum of input by arrays 
#include<stdio.h>
int main(){
    int arr[10];
    int n = sizeof(arr)/4;
    printf("%d",n);
    printf("\n"); 
     for(int i =0 ; i<n;i++){
       
       
    scanf("%d",&arr[i]);
    
     }
    printf("\n"); 
    int sum = 0;
    for(int i =0 ; i<n;i++){
    sum = sum + arr[i];
    }
    printf("%d",sum);
    return 0 ;
}