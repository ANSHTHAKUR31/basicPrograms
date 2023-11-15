#include<stdio.h>
int fact(n){
    int f =1 ;
    for( int i=1 ; i<=n; i++){
    f = f*i ;
    }
    return f ;                                         
}
int ncr(n,r){
    int fact();
    return fact(n)/fact(n-r);
}
int main(){
int n ;
printf(" enter the value of n  :");
scanf("%d",&n);
int r ;
printf(" enter the value of r  :");
scanf("%d",&r);
int ncr();
int ans = ncr(n,r);
printf(" the permutation is %d",ans);
    return 0 ;
}