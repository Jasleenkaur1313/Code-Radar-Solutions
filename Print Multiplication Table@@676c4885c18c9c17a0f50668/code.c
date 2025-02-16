#include <stdio.h>
int main() 
{
    int i=1,N;
    scanf("%d",&N);
    while (i<=10)
        {
            printf("%d x %d = %d\n",N,i,i*N);
            i++;
        }
  
return 0;
}