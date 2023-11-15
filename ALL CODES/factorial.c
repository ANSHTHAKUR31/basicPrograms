#include<stdio.h>
int main (){
    int x;
    printf("enter the no : ");
    scanf("%d",&x);
    int fct =1;
    for(int i =1; i<=x; i++){
        fct = fct * i ;
       
    }

 printf("%d",fct);


    return 0;
}