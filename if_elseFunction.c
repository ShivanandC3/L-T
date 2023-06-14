#include <stdio.h>
int big(int a, int b) {
return (a > b) ? a : b;
}

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    int result = big(num1, num2);
    printf("The biggest number is: %d\n", result);

    return 0;
}
