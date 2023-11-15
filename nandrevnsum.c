#include<stdio.h>
int ulta(n){
int ld = 0 ; 
    int rv = 0  ;
        while (n>0)
    {
        ld= n%10;
         rv = rv*10;
        rv = rv + ld;
        n = n / 10;
    
    }
    printf("\n%d",rv);
   return rv ;
}    
int main (){
int n ;
printf(" enter the no : ");
scanf("%d",&n);

printf("\n%d",n+ulta(n));
    return 0 ;
}