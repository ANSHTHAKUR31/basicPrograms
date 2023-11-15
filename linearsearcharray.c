// linear search in a array
#include<stdio.h>
#include<stdbool.h>
int main(){
int arr[]= {12,33,43,34,3324,35,24,46,5,64};
int n = sizeof(arr)/4;
int x = 5 ;
bool lol= false ;
for(int i =0 ; i<n;i++){
    if(arr[i]==x){ 
        lol=true;
        break;
    }
}
if(lol==true) printf("%dexist in this array",x);
else printf("%ddoes not exist in this array",x);


    return 0 ; 
}