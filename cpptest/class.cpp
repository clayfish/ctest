//
// Created by akela on 05-09-2016.
//

#include <iostream.h>
#include <conio.h>

class a {
    int a, b, c;

    void fun() {
        std::cout << "Enter Two Value";
        std::cin >> a >> b;
        c = a + b;
        std::cout << "sum=" << c;
    }
};

void main() {
    a ob;
    ob.fun();
    getch();
}
