#include <stdio.h>

void func() {
    auto int x = 10;
    printf("Value of x inside func: %d\n", x);
    x++;
}

int main() {
    func();
    func();
    return 0;
}
