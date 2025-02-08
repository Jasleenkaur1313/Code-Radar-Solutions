#include <stdio.h>
unsigned int flipBits(unsigned int num) {
    return ~num;
}

int main() {
    unsigned int num;
    scanf("%u", &num);
    unsigned int flippedNum = flipBits(num);
  for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    for (int i = 31; i >= 0; i--) {
        printf("%d", (flippedNum >> i) & 1);
    }
    
    printf("%u", flippedNum);
    
    return 0;
}
