//
// Created by akela on 26-07-2016.
//

#include <stdio.h>
#include <conio.h>

int table1(){
    int i, a, z;
    printf("please input a number");
    scanf("%d", &a);
    for(i=10; i>=1; i--){
        z=a*i;
        printf("%d\n", z);
    }
    getch ();
    return 0;
}