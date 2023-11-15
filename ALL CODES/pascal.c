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
for(int i =0 ; i<=n; i++){
    for(int j=0 ; j<=i ; j++){
        int x = ncr(i,j);
        printf("%d ",x);
    }
    printf("\n");
}
    return 0 ;
}