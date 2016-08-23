//
// Created by akela on 23-08-2016.
//

#include <stdio.h>
#include <string.h>

struct student {
    char name[20];
    int rollno;
    float marks;
};

void strctr() {
    struct student stu1 = {"Pawan", 25, 68};
    struct student stu2 = {"Adarsh", 24, 60};
    struct student stu3, stu4;
    strcpy(stu3.name, "john");
    stu3.rollno = 26;
    stu3.marks = 97.3;
    printf("Please Enter Fourth Student Name, Roll Number And Marks :\t");
    scanf("%s %d %f", stu4.name, &stu4.rollno, &stu4.marks);
    printf("First Student Details : %s %d %.2f\n", stu1.name, stu1.rollno, stu1.marks);
    printf("Second Student Details : %s %d %.2f\n", stu2.name, stu2.rollno, stu3.marks);
    printf("Third Student Details : %s %d %.2f\n", stu3.name, stu3.rollno, stu4.marks);
    printf("Fourth Student Details : %s %d %.2f\n", stu4.name, stu4.rollno, stu4.marks);

}