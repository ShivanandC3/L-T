#include <stdio.h>
#include <string.h>

void printExponent(double x) {
    unsigned long long exponent;
    memcpy(&exponent, &x, sizeof(exponent)); 
    exponent = (exponent >> 52) & 0x7FF;
    // Hexadecimal
    printf("Hexadecimal: 0x%llX\n", exponent);

    // Converting exponent to binary
    printf("Binary: 0b");
    unsigned long long mask = 0x400; 
    int i;
    for (i = 0; i < 11; i++) {
        printf("%d", (exponent & mask) != 0);
        mask >>= 1; 
        
    }
    printf("\n");
}

int main() {
    double x;
    printf("Enter a double value: ");
    scanf("%lf", &x);
    printExponent(x);
    return 0;
}
