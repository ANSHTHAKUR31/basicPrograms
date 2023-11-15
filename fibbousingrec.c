#include<stdio.h>
int fibbo(n){
    if(n==0 || n==1 ) return 1 ;
    return fibbo(n-1) + fibbo(n-2);
    
}
int main (){
int n ;
printf( "enter the value of n :");
scanf("%d",&n);
printf("%d",fibbo(n));


    return 0 ;
}