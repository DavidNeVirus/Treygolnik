#include <iostream>

void drawTriangle(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cout << "Введите высоту треугольника: ";
    std::cin >> n;

    drawTriangle(n);

    return 0;
}
