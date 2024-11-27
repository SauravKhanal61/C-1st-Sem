#include <stdio.h>
int main() {
    float price_per_dozen, price_per_mango;
    int n;    
    printf("Enter the price of a dozen mangos: ");
    scanf("%f", &price_per_dozen);    
    printf("Enter the number of mangos: ");
    scanf("%d", &n);    
    price_per_mango = price_per_dozen / 12;    
    printf("Price of %d mangos: %.2f\n", n, price_per_mango * n);    
    return 0;
}
