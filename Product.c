//
// Created by akela on 28-07-2016.
//

#include <stdio.h>
#include <conio.h>

int product(){
    int i, n=1, x, u;
    printf("Please input an digit: ");
    scanf("%d", &i);
    x=i;
    while(i != 0){
        u= i%10;
        n= n*u;
        i= i/10;
    }
    printf("Product of %d is %d", x,n);
    getch();
    return 0;
}