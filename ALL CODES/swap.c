// swaping values using extra variable and without
#include<stdio.h>
int main(){
    int x ;  /* let suppose x = 5 */ 
    printf(" enter the value of x : ");
    scanf("%d",&x);
    int y ; /* let suppose y = 6 */
    printf(" enter the value of x : ");
    scanf("%d",&y);
    // int z = x ; /* now z = 5*/
    // x = y; /* x =  6 */
    // y = z ; /* y = 5 */
    // printf("%d %d",x,y);
   x = x +y ;
    y = x-y;
    x = x-y;
    printf("%d %d",x,y);
    return 0 ;
}