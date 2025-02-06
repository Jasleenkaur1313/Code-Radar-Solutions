#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    // condition to check if LSB is a  set
    if (n & 1) {
        printf("Set\n"); // LSB is 1
    } else {
        printf("Not Set\n"); // LSB is 0
    }

    return 0;
}
