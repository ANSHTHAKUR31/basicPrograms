#include<stdio.h>
int main(){
    int n ; 
    printf(" enter the numbers  :");
    scanf("%d",&n);
    int ld = 0 ; 
    int rv = 0  ;
        while (n>0)
    {
        ld= n%10;
         rv = rv*10;
        rv = rv + ld;
        n = n / 10;
    }
    printf(" the sum of the numbers  are %d",rv);
    



    return 0;
}