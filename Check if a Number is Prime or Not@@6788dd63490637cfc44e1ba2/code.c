#include <stdio.h>
int main(){
    int n,count=0;
    scanf("%d",n);
    for(i=1;i<=n;i++){
        if(n%i==0)
        {
            count++;
            }
    }
    if(count==2)
    printf("Prime");
    else
    printf("Not Prime");
    return 0;
}
















// #include <stdio.h>
// int main(){
//     int fact=0;
//     int a;
//     scanf("%d",&a);{
//         for(int i=2;i<a;i++){
//             if(a%i==0){
//                 fact+=1;
//                 break;
//             }
//         }
//         if(fact==0){
//             printf("Prime");
//             }
//         else{
//         printf("Not Prime");
//         }
//     }
//     return 0;
    
// }