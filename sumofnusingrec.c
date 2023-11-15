#include<stdio.h>
int sum(b){
    if(b==1) return 1;
    int rec = b + sum(b-1);
    return rec ;
}
int main(){
    int x ; 
    printf(" enter the value of x : ");
    scanf("%d",&x);
    printf("%d",sum(x));


    return 0 ;
}