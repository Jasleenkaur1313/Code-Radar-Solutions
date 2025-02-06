#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // Find the position of the lowest set bit
    int position = 0;

    if (num == 0) {
        printf("-1\n"); // No set bit
        return 0;
    }

    while ((num & 1) == 0) {
        num >>= 1;
        position++;
    }

    printf("%d\n", position);
    return 0;
}
