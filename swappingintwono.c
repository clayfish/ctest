//
// Created by akela on 02-08-2016.
//

#include <stdio.h>
int swappingintwono(){
    int i, n;
    printf("Please enter two numbers: ");
    scanf("%d %d", &i, &n);
    i= (i+n)-i;
    n=(n+i)-n;
    printf("Now i=%d and n=%d", n, i);

}