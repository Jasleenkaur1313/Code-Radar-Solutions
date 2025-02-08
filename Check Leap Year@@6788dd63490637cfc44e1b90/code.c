#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if((a%4==0 && a%100!=00)||(a%400==0)){
    pintf("Leap Year");}
    
    else{
        printf("Not a Leap Year");
    }
    
   return 0;
}

