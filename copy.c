//
// Created by akela on 23-08-2016.
//

#include <stdio.h>
#include <string.h>
void copy(){
    char str1[10], str2[20];
    printf("Enter the I string : ");
    scanf("%s", str1);
    printf("Enter the II string : ");
    scanf("%s", str2);
    strcpy(str2, str1);
    printf("I string is :%s\t\t II string is :%s\n", str1, str2);


}