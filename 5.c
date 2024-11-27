#include <stdio.h>
#include <math.h>

int main() {
    float num, squareRoot;
    printf("Enter a number: ");
    scanf("%f", &num);
    squareRoot = sqrt(num);
    printf("Square root of %.2f is %.2f\n", num, squareRoot);
    return 0;
}
