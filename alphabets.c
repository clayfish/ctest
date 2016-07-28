//
// Created by akela on 28-07-2016.
//

#include <stdio.h>
#include <conio.h>

void main(){
    char z;
    printf("Please press any alphabet key without cps on: ");
    scanf("%c", &z);

    char vowels[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    short i,flag=0;
    for(i=0; i<10; i++) {
        if(z == vowels[i]) {
            printf("This is a vowel");
            flag=1;
            break;
        }
    }

    if(flag ==0) {
        printf("This is not a vowel");
    }

//    switch(z){
//        case 'a':
//            printf("This is a vowel");
//            break;
//        case 'e':
//            printf("This is a vowel");
//            break;
//        case 'i':
//            printf("This is a vowel");
//            break;
//        case 'o':
//            printf("This is a vowel");
//        case 'u':
//            printf("This is a vowel");
//            break;
//        default:
//            printf("This is not a vowel or cps on");
//            break;
//    }
getch();
}