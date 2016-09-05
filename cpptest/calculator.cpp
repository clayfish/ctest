//
// Created by akela on 31-08-2016.
//
#include <iostream>
#include <conio.h>

int main() {
    int a, b, c;
    char op;
    std::cout << "Enter the First number and operator then Second number: " << "\n";
    std::cin >> a >> op >> b;
    switch (op) {
        case '+': {
            c = a + b;
            std::cout << "=" << c;
            break;
        }
        case '-': {
            c = a - b;
            std::cout << "=" << c;
            break;
        }
        case '*': {
            c = a * b;
            std::cout << "=" << c;
            break;
        }
        case '/': {
            c = a / b;
            std::cout << "=" << c;
            break;
        }
    }
    getch();
    return 0;
}
