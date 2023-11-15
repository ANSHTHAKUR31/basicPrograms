#include<stdio.h>
int main (){
    char ch ;
    printf(" enter the operator : ");
    scanf("%c",&ch);
    int a ;
    printf(" enter the value of first no ");
    scanf("%d",&a);
    int b ;
    printf(" enter the value of first no ");
    scanf("%d",&b);
    if(ch=='+') printf("the addition of %d and  %d is %d",a,b,a+b);
   else if(ch=='-') printf("the subtraction of %d and %d is %d",a,b,a-b);
    else if(ch=='*') printf("the multiplication of %d and %d is %d",a,b,a*b);
    else if(ch=='/') printf("the division of %d and %d is %d",a,b,a/b);
    else if(ch=='%') printf("the mod of the %d and %d is %d",a,b,a%b);
    else printf("invalid operator");
    return 0 ;
}