// swaping values using pointers
#include<stdio.h>
void swap(int*x,int*y){
     int z = *x ; 
    *x = *y; 
   *y = z ; 
   
}
int main() {
   int x ;
   printf(" enter the value of x : ");
   scanf("%d",&x);
   int y ;
   printf(" enter the value of y : ");
   scanf("%d",&y);
   printf(" \nwithout swaping the  value is %d %d",x,y);
   swap(&x,&y);
    printf("\nafter  swaping the  value is %d %d",x,y);
   
    return 0 ;
}