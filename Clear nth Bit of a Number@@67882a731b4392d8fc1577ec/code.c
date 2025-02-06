#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);

    // Clear the nth bit
    int result = a & ~(1 << b);

    printf("%d\n", result);
    return 0;
}
