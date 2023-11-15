// swaping using array without creating extra variable & checking palindrome .
#include<stdio.h>
int main (){
    int arr[]= { 0,1,2,3,2,1,0};
    int n = sizeof (arr) / 4 ;
    for(int j =0 ; j<n ;j++){
    printf(" %d",arr[j]);
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
    printf(" %d",arr[i]);}
    if( arr[j]== arr[i]){
        printf("\nit is a palindrome");}
         else printf("it is  not a palindrome");
       return 0 ;
}