#include <stdio.h>

int main() {
    int num1, num2;
    char ch;
    if (scanf("%d %d %c", &a, &b, &ch)) {
        printf("error\n");
        return 1;
    }
    switch (ch) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a-b);
            break;
        case '*':
            printf("%d\n", a*b);
            break;
        case '/':
            if (b == 0) {
                printf("error");  
            } else {
                printf("%d\n", a / b);
            }
            break;
        default:
            printf("error\n");  
    }

    return 0;
}
