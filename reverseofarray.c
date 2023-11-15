// reverse of array using extra variable and without .
#include<stdio.h>
int main(){
    int i,j;
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/4;
    for(int i =0; i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    i = 0;
    j= n-1 ;
   while(i<j){
     int temp = arr[i];
      arr[i] = arr [j];
     arr[j] = temp;
    i++;
    j--;
   }
   for(int i =0; i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
   printf("\n");

//    now without using an extra variable 
//   int crr[n];
//    for(int i =0; i<n;i++){
//     crr[i]=arr[n-1-i];
//     }
//  for(int i =0; i<n;i++){
//         printf("reverse without using extra variable is %d",crr[i]);
    
    return 0 ;
}