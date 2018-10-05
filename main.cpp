#include <iostream>

void max (int a, int b) {
    if (a>b)
    std::cout << "Max = " << a << std::endl;
    else
        std::cout << "Max = " << b << std::endl;
}
int main() {
    max (4,5);
    return 0;
}