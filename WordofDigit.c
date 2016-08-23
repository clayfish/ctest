//
// Created by Pawan Mishra on 29-07-2016.
//


#include <stdio.h>

void wordofdigit() {
    char z;
    printf("Enter your digit:");
    scanf("%c", &z);
    switch (z) {
        case '0':
            printf("this is zero");
            break;

        case '1':
            printf("this is One");
            break;

        case '2':
            printf("this is Two");
            break;

        case '3':
            printf("this is Three");
            break;

        case '4':
            printf("this is Four");
            break;

        case '5':
            printf("this is Five");
            break;

        case '6':
            printf("this is Six");
            break;

        case '7':
            printf("this is Seven");
            break;

        case '8':
            printf("this is Eight");
            break;

        case '9':
            printf("this is Nine");
            break;
        default:
            printf("This is not in 0 to 9 Range");

    }

}
