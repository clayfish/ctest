//
// Created by akela on 11-08-2016.
//

#include <stdio.h>
int pointer(){
    int a = 87;
    float b = 4.5;
    int *p1 = &a;
    float *p2 = &b;
    printf("value of p1 = Address of a = %u \n", p1);
    printf("Value of p2 = Address of b = %u \n", p2);
    printf("Address of p1 = %u \n", &p1);
    printf("Address of p2 = %u \n", &p2);
    printf("Value of a = %d %d %d \n", a, *p1, *(&a));
    printf("Value of b = %f %f %f \n", b, *p2, *(&b));

}
