#include<stdio.h>
int main (){
    int x;
    printf("enter the no : ");
    scanf("%d",&x);
    int a = 1 ;
     int b=1;
    int sum = 0;
    for(int i =1; i<=x-2; i++){
        sum = a + b  ;
        a = b ;
        b = sum ;
       
    }

 printf("the fibonacci is %d",sum);


    return 0;
}