#include <stdio.h>

int main() {
    int a, b;
    char ch;

    scanf("%d %d %c", &a, &b, &ch);

    if (ch == '+')
        printf("%d\n", a + b);
    else if (ch== '-')
        printf("%d\n", a - b);
    else if (ch== '*')
        printf("%d\n", a * b);
    else if (ch == '/') {
        if (b == 0)
            printf("error\n");  // Handle division by zero
        else
            printf("%d\n", a / b);
    } else
        printf("error\n");  // Invalid operator

    return 0;
}






// #include <stdio.h>

// int main() {
//     int a,b;
//     char ch;
//     if (scanf("%d %d %c", &a, &b, &ch)!=3) {
//         printf("error\n");
//         return 1;
//     }
//     switch (ch) {
//         case '+':
//             printf("%d\n", a + b);
//             break;
//         case '-':
//             printf("%d\n", a-b);
//             break;
//         case '*':
//             printf("%d\n", a*b);
//             break;
//         case '/':
//             if (b == 0) {
//                 printf("error");  
//             } else {
//                 printf("%d\n", a / b);
//             }
//             break;
//         default:
//             printf("error\n");  
//     }

//     return 0;
// }
