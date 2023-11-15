#include<stdio.h>
int fact(n,r){
int a=1 ;
for(int i =1 ;i<=n; i++){
    a = a * i;
}
return a ;
}
int ncr(n,r){
 return fact(n)/(fact(r) *fact(n-r));
} 
int main(){
    int n ;
    printf(" enter the value of n ");
    scanf("%d",&n);
int r ;
    printf(" enter the value of r ");
    scanf("%d",&r);
int ans = ncr(n,r);

printf(" the combination is  %d  ",ans);
    return 0 ;
}