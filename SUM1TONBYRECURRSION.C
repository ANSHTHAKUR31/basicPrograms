#include<stdio.h>
void sum(int n, int ad){
    if(n==0){
        printf("%d",ad);
        return ;
    }
   sum(n-1,ad+n);
}
int main(){
int x ; 
printf(" enter the number of x  : ");
scanf("%d",&x);
sum(x,0);
    return 0 ;
}