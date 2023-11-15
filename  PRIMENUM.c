#include<stdio.h>
int main(){
    int x ;
    printf(" enter the number :");
    scanf(" %d",&x);
    int a = 0;
    for(int i=2 ; i<=x-1 ; i++){
        if(x%i==0)
        a= a+1;
    }
    if(x==1) printf(" its not a prime niether a composite ");
    else if (a==0) printf(" its a prime number");
    else printf(" its a composite number ");
    return 0 ;
}