#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
};

void readComplex(struct Complex* num);
void writeComplex(struct Complex num);
struct Complex addComplex(struct Complex num1, struct Complex num2);
struct Complex multiplyComplex(struct Complex num1, struct Complex num2);

int main() {
    struct Complex num1, num2, sum, product;

    printf("Enter the first complex number:\n");
    readComplex(&num1);

    printf("Enter the second complex number:\n");
    readComplex(&num2);

    printf("\nFirst complex number: ");
    writeComplex(num1);

    printf("Second complex number: ");
    writeComplex(num2);

    sum = addComplex(num1, num2);
    printf("\nSum of the complex numbers: ");
    writeComplex(sum);

    product = multiplyComplex(num1, num2);
    printf("Product of the complex numbers: ");
    writeComplex(product);

    return 0;
}

void readComplex(struct Complex* num) {
    printf("Real part: ");
    scanf("%f", &(num->real));
    printf("Imaginary part: ");
    scanf("%f", &(num->imaginary));
}

void writeComplex(struct Complex num) {
    if (num.imaginary >= 0)
        printf("%.2f + %.2fi\n", num.real, num.imaginary);
    else
        printf("%.2f - %.2fi\n", num.real, -num.imaginary);
}

struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;

    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;

    return result;
}

struct Complex multiplyComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;

    result.real = (num1.real * num2.real) - (num1.imaginary * num2.imaginary);
    result.imaginary = (num1.real * num2.imaginary) + (num1.imaginary * num2.real);

    return result;
}
