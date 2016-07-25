//
// Created by akela on 22-07-2016.
//

#include <stdio.h>
#include <stdlib.h>

int summation(int, int);

int subtract(int, int);

int multiply(int, int);

float divide(int, int);

int modulus(int, int);

int main() {
    int a, b, sum, difference, product, mod, x = 1;
    float division;

    do {
        printf("Enter Two Number=   \n");
        scanf("%d%d", &a, &b);

        sum = summation(a, b);
        printf("The sum of %d and %d is %d. \n", a, b, sum);

        difference = subtract(a, b);
        printf("the difference of %d and %d is %d. \n", a, b, difference);

        product = multiply(a, b);
        printf("the product of %d and %d is %d. \n", a, b, product);

        division = divide(a, b);
        printf("the division of %d and %d is %.2f. \n", a, b, division);

        mod = modulus(a, b);
        printf("the mod of %d and %d is %d.\n", a, b, mod);

        printf("Do you want more? (Enter 1): ");
        scanf("%d", &x);
    } while (x == 1);

    return 0;
}

int summation(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return abs(x - y);
}

int multiply(int x, int y) {
    return x * y;
}

float divide(int x, int y) {
//  if(y!=0){
//    return 1.0f*x / y;
//  }
//    return 0;
    return y == 0 ? 0 : 1.0f * x / y;
}

int modulus(int x, int y) {
//    if(y!=0){
//        return x % y;
//    }
//    return 0;

    return y == 0 ? 0 : x % y;
}
