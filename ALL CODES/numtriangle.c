#include<stdio.h>
int main(){
    int r ;
    printf(" enter the number of rows : ");
    scanf("%d",&r);
    // int c ;
    // printf(" enter the number of column  : ");
    // scanf("%d",&c);
    for(int i=1; i<=r; i++){
    for(int j= 1; j<=i; j++){
        if(i%2!=0) printf("%d",j);
       else printf(" %c",j+64);
    }
     printf("\n");
    }

    return 0 ;
}