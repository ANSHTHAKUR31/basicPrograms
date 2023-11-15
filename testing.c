#include<stdio.h>
int main (){
  int n ;
  printf(" enter the num = ");
  scanf("%d",&n);
  int a = 0 ;
  for(int i = 2 ; i<n ; i++){
    if(n%i==0){
      a++;
      break;
    }

  }
  if(n==1){
    printf(" 1 is neither prime nor composite ");
  }
 else if(a==0){
    printf( " is is a prime num ");
  }
  else printf( " it is composite num");
}