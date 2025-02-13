#include <stdio.h>
int main(){
    int fact=0;
    int a;
    scanf("%d",&a);{
        for(int i=2;i<a;i++){
            if(a%i==0){
                fact+=1;
                break;
            }
        }
        if(fact==0){
            printf("Prime");
            }
        else{
        printf("Not Prime");
        }
    }
    return 0;
    
}