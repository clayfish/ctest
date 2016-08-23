//
// Created by akela on 23-08-2016.
//

#include <stdio.h>
#include <string.h>

void con() {
    char str1[20], str2[20];
    printf("Enter the I string:\t");
    gets(str1);
    printf("Enter the II string:\t");
    gets(str2);
    strcat(str1, str2);
    printf("I string is : %s\t II string is : %s\n", str1, str2);
    printf("Concatinative string is : %s\n", str1);
    strcat(str1, "_one");
    printf("Now I string is : %s\n", str1);

}
