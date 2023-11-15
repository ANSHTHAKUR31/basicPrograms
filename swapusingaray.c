// swaping using array without creating extra variable
#include<stdio.h>
int main (){
    int arr[]= { 0,1,2,3,4,5,6};
    int n = sizeof (arr) / 4 ;
    for(int i =0 ; i<n ;i++){
    printf(" %d",arr[i]);
    }
    printf("\n");
   int i = 0;
   int j = n-1 ;
   while(i<j){
   // swaping (arr[i],arr[j])
   int temp = arr[i];
   arr[i]= arr[j];
   arr[j]=temp;
   i++;
   j--;

   }
    for(int i =0 ; i<n ;i++){
    printf(" %d",arr[i]);
    }
       return 0 ;
}