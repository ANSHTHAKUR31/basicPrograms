#include<stdio.h>
int main(){
    int n ; 
    printf(" enter the numbers  :");
    scanf("%d",&n);
    int digit =0;
    while (n!=0)
    {
        n = n/10;
        digit ++ ;    
    }
    printf(" the digits are %d",digit);
    return 0;
}