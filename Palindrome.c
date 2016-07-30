//
// Created by akela on 28-07-2016.
//

#include <stdio.h>
#include <conio.h>
int palindrome(){
    int i, z, rem, n=0;
    printf("Enter a Number: ");
    scanf("%d", &i);
    z=i;
    while(i!=0){
        rem= i%10;
        n= n+rem;
        i= i/10;}
    printf("The palindrome of %d is %d", z,i);

    getch();
    return 0;
}